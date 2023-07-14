#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> prefixSum(N + 1, 0);
        for (int i = 1; i <= N; i++) {
            prefixSum[i] = prefixSum[i - 1] + A[i - 1];
        }

        int maxX = 0;
        vector<int> arr = A;

        while (Q--) {
            int Li, Ri;
            cin >> Li >> Ri;

            int sum = prefixSum[Ri] - prefixSum[Li - 1];
            maxX += sum;

            if (Li > 1) {
                swap(arr[Li - 1], arr[Ri]);
            }
        }

        cout << maxX << endl;
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
