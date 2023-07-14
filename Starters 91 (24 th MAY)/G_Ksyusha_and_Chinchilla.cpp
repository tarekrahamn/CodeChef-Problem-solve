// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, Q;
//         cin >> N >> Q;

//         vector<int> A(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }

//         vector<int> prefixSum(N);
//         prefixSum[0] = A[0];
//         for (int i = 1; i <= N; i++) {
//             prefixSum[i] = prefixSum[i-1] + A[i];
//         }

//         // Rearrange the array [1, 2, 3, 4, 5] as [2, 4, 5, 3, 1]
//         sort(A.begin(), A.end(), greater<int>());
//         swap(A[1], A[2]);
//         swap(A[2], A[4]);

//         int X = 0;
//         while (Q--) {
//             int Li, Ri;
//             cin >> Li >> Ri;

//             int sum = (Li > 1) ? (prefixSum[Ri-1] - prefixSum[Li-2]) : prefixSum[Ri-1];
//             X += sum;
//         }

//         cout << X << endl;
//         for (int i = 0; i < N; i++) {
//             cout << A[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
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

        vector<int> prefixSum(N);
        prefixSum[0] = A[0];
        for (int i = 1; i < N; i++) {
            prefixSum[i] = prefixSum[i-1] + A[i];
        }

        sort(A.begin(), A.end(), greater<int>());

        int X = 0;
        while (Q--) {
            int Li, Ri;
            cin >> Li >> Ri;

            int sum = (Li > 1) ? (prefixSum[Ri-1] - prefixSum[Li-2]) : prefixSum[Ri-1];
            X += sum;
        }

        cout << X << endl;
        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
