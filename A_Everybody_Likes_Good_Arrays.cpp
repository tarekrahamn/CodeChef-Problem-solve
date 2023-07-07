#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        int sum = p + q + r + s;
        int mx = max({p, q, r, s});
        if (mx > sum - mx) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

