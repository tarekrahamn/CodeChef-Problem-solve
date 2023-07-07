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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_score = INT_MAX;
        for (int i = 1; i < n - 1; i++) {
            int score = abs(max((a[i] - a[i-1]),(a[i] - a[i+1])));
            min_score = min(min_score, score);
        }
        cout << min_score << endl;
    }
    return 0;
}
