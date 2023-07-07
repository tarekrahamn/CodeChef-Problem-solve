/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 16.04.2023 ************************\\
**/
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
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int main(){
    Tarek
    test{
        int n;
        string s;
        cin >> n >> s;
        bool zlatan_wins = false;
        for (int i = 0; i < n-1; i++) {
            if (s[i] != s[i+1]) {
                s.erase(i, 2);
                n -= 2;
                zlatan_wins = !zlatan_wins;
                i -= 2;
                if (i < -1) i = -1;
            }
        }
        cout << (zlatan_wins ? "Zlatan" : "Ramos") << endl;
    }
    return 0;
}