#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
void run(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    int flag1 = false;
    int flag2 = true;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ':'){
            a.push_back(i);
        }
    }
    // int index = 0;
    // for (char c : s) {
    //     if (c == ':') {
    //         a.push_back(index);
    //     }
    //     index++;
    // }

    for (int i = 0; i < a.size() -1; i++) {
        int start = a[i];
        start++;
        int end = a[i+1];
        for (int j = start; j < end; j++) {
            if (s[j] != ')'){
                flag1 = true;
            }
            flag2 = false;
        }
        if (flag1 == false && flag2 == false){
            ans++;
        }
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
