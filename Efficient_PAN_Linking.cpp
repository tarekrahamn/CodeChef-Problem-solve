/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 12.04.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            ll t;cin>>t;while(t--)
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
        string N; // number of applications
        cin >> N;
        int unprocessed = 0; // minimum number of unprocessed applications
        // for(int i = 0;i<N.length();i++){
        //     unprocessed = (unprocessed*10+(N[i]-'0'))%20;
        // }
        for (int i = 0; i < N.length(); i++) {
            unprocessed = (unprocessed << 3) + (unprocessed << 1) + (N[i] - '0');
            unprocessed %= 20;
        }
        cout <<unprocessed << endl;
    }
    return 0 ;
}