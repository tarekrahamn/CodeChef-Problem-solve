#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll extended_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool can_get_n(ll M, ll N) {
    ll G = gcd(M, N);
    if (G != 1 && N % G == 0) {
        ll X = G / gcd(G, M / G);
        ll Y = M / G / gcd(G, M / G);
        ll a, b;
        extended_gcd(X, Y, a, b);
        return a * G * N / gcd(a * G, b * (M / G)) == N;
    } else {
        return G == N;
    }
}

void solve() {
    ll m, n;
    cin >> m >> n;
    if (can_get_n(m, n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
