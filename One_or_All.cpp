#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            int t;cin>>t;while(t--)
#define   pb              push_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   loop            for (ll i = 0; i < n; i++)
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int main (){
    Tarek
    test {
         int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, min_val = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            min_val = min(min_val, a[i]);
        }
        if (sum % n != 0) {
            cout << "CHEF" << endl;
        } else {
            int avg = sum / n;
            if (min_val < 11) {
                cout << "CHEF" << endl;
            } else {
                cout << "CHEFINA" << endl;
            }
        }
    }
    return 0;
}
