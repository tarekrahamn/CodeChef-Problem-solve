/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 14.05.2023 ***********************
$$$$$$$$$$ Practice is the only shortcut to improve $$$$$$$$$$$$$$$$$$$$$$$$
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   push            push_back
#define   pop             pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   B               break;
#define  checkmate        return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   PI              3.14159265358979323846
#define   all(x)         (x).begin(), (x).end()
#define   rev(dp)         reverse(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll k=a;k<=b;k++)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
void run(){
        ll n, k;
        cin >> n >> k;
        vector<pair<int, int>> forecast(n);
        FOR(i,0,n){
            cin >> forecast[i].first;
            forecast[i].second = i;
        }
           sort(all(forecast));
           vll temperature(n);
           cinv(temperature)
           sort(all(temperature));
           vll result(n);
           FOR(i,0,n) {
            result[forecast[i].second] = temperature[i];
        }
        FOR(i,0,n){
            cout << result[i] << " ";
        }
        cout << nl;

    //     sort(all(dp));
    //     ll b(n);
    //     cinv(b)
    //     sort(all(b));
    //   //  vll result(n);
    //     FOR(i,0,n){
    //         ll ai[n];
    //        // ll idx = lower_bound(b.begin(), b.end(), ai - k) - b.begin();
    //        // result[i] = b[idx];
    //        // b.erase(b.begin() + idx);
    //        ai[]

    //     }
    //    FOR(i,0,n) {
    //         cout << result[i] << " ";
    //     }
    // cout << endl;
}
int main(){
    Tarek
    test{
        run();
    }
}