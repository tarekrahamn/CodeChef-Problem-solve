#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

long long power(long long x, long long y) {
    long long res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y /= 2;
    }
    return res;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long result = 0;
        for (int i = 0; i < N; i++) {
            result = (result + A[i]) % MOD;
        }

        long long answer = power(2, N - 1);
        result = (result * answer) % MOD;

        cout << result << endl;
    }

    return 0;
}
