#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int add(int a, int b) {
    return (a + b >= mod) ? a + b - mod : a + b;
}

int sub(int a, int b) {
    return (a - b < 0) ? a - b + mod : a - b;
}

int mul(int a, int b) {
    return (long long)a * b % mod;
}

int power(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

int inverse(int a) {
    return power(a, mod - 2);
}

struct asteroid {
    int x, y;
    asteroid() {}
    asteroid(int x, int y) : x(x), y(y) {}
    bool operator<(const asteroid& other) const {
        return x < other.x;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<asteroid> asteroids(n);
    for (int i = 0; i < n; i++) {
        cin >> asteroids[i].x >> asteroids[i].y;
    }
    sort(asteroids.begin(), asteroids.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || asteroids[i].x != asteroids[i-1].x) {
            cnt++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (cnt == 1 || asteroids[i].x != asteroids[0].x) {
            ans = add(ans, power(2, n - 1));
        } else {
            int p = power(2, n - cnt);
            int q = sub(power(2, n), p);
            ans = add(ans, mul(inverse(q), p));
        }
    }
    cout << mul(ans, inverse(power(2, n))) << '\n';
    return 0;
}
