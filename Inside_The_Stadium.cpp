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
        ll N; // total number of balls played by Gill
        cin >> N;
        vector<ll> runs(N); // vector to store the runs scored on each ball
        for (ll i = 0; i < N; i++) {
            cin >> runs[i];
        }

        float strike_rate = 0; // strike rate of Gill
        float times_strike_rate_100 = 0; // count of times strike rate became 100

        for (ll i = 0; i < N; i++) {
            strike_rate+=runs[i];
            float ball = i+1;
            if (strike_rate==0){
                continue;
            }
            float finalrate = (strike_rate /ball );
            if(finalrate*100==100){
                times_strike_rate_100++;
                }
            }
             cout << times_strike_rate_100 << endl;
    }
    return 0;
}