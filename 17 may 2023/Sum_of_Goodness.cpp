#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + (long long)(i)*(n-i)%MOD*(a[i]-a[i-1])%MOD)%MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
