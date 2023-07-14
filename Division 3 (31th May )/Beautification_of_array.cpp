#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end()); // Sort the array in non-decreasing order

        long long beauty = 0;
        for (int i = 0; i < N; i++) {
            int count = min(K, N - i - 1); // Number of elements to pair with A[i]
            long long pairs = (A[i] * 1LL * ((count * 1LL * (count + 1)) / 2)) % MOD;
            beauty = (beauty + pairs) % MOD;
            K -= count; // Reduce the remaining operations by count
        }

        cout << beauty << endl;
    }

    return 0;
}
