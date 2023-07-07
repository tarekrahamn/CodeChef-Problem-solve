#include <iostream>
using namespace std;

void run() {
    int n;
    cin >> n;
    string s,t,r;
    cin >> s >> t >> r;
    string ans = "";
    int shift = 0;
    for (int i = 0; i < s.length(); i++) {
        int diff = (t[i] - s[i] + 26) % 26; 
        if (i == 0) {
            shift = diff;
        } else if (shift != diff) {
            cout << "Invalid" << endl;
        }
    }
    for (int i = 0; i < r.length(); i++) {
        char ch = r[i];
        char rotatedCh = 'a' + (ch - 'a' + shift) % 26;
        ans += rotatedCh;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        run();
    }
    return 0;
}
