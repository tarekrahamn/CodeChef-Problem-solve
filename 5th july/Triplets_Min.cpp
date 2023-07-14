
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int mm=min(a[i], a[j]);
                int minimum = min(mm, a[k]);
                b.push_back(minimum);
            }
        }
    }
    while (q--) {
        int k;
        cin >> k;
        vector<int> c = b;
        sort(c.begin(), c.end());
        cout << c[k - 1] << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
