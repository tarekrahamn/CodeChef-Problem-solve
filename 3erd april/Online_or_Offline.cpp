#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        double finalPriceOnline = N - (0.1 * N);
        if (finalPriceOnline < M) {
            cout << "ONLINE" << endl;
        } else if (M < finalPriceOnline) {
            cout << "DINING" << endl;
        } else {
            cout << "EITHER" << endl;
        }
    }
    return 0;
}
