#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    if (sum < K) {
        cout << 0 << endl;
    } else {
        int ans = 0;
        for (int i = 0; i < N; i++) {
            ans += (A[i] / K);
        }
        cout << ans << endl;
    }

    return 0;
}
