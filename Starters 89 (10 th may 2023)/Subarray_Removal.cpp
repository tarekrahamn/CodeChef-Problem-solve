/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 08.05.2023 ***********************
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
#define   srt(dp)         sort(dp.begin(), dp.end());
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll k=a;k<=b;k++)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
int main(){
   Tarek
   test{
    ll n ;
    cin >> n;
    vll mp(n);
    cinv(mp)
    vll dp(n+1);
    
//    FOR(i,0,n){
//     cin >> mp[i];
//    }
    FOR(i,0,n){
        dp[mp[i]]=i;
    }
    ll len =n+1,range = -1;
    ll solve = 0;
    ll m = n;
    set<ll>ss;
    ss.insert(n);
    len=range=dp[n];
    for(ll i=n-1;i>=1;i--){
        ll psum=m;
        while(!(len<=dp[i] && dp[i]<=range)){
            if(dp[i]<len){
                len--;
                ss.insert(mp[len]);
                m=min(m,mp[range]);
            }
            if(dp[i]>range){
                range++;
                ss.insert(mp[range]);
                m=min(m,mp[range]);
            }
        }
        if((n-m+1)==ss.sz &&ss.sz!=n){
            solve = max(solve,(ll)(ss.sz));
        }
    }
    cout << max(1ll,solve) << nl;
   }
   checkmate
}
// int main() {
//     Tarek
//     test {
//         ll n ;
//         cin >> n;
//         vll dp(n);
//         vll mp(n);
//         cinv(mp);
//         FOR(i,0,n){
//             dp[mp[i]]=i;
//         }
//         ll len = n+1, range = -1;
//         ll solve = 0;
//         ll m = n;
//         set<ll> ss;
//         ss.insert(n);
//         len = range = dp[n];
//         for(ll i=n-1;i>=1;i--){
//             ll psum = m;
//             while(!(len <= dp[i] && dp[i] <= range)){
//                 if(dp[i] < len){
//                     len--;
//                     ss.insert(mp[len]);
//                     m = min(m, mp[range]);
//                 }
//                 if(dp[i] > range){
//                     range++;
//                     ss.insert(mp[range]);
//                     m = min(m, mp[range]);
//                 }
//             }
//             if((n-m+1) == ss.sz && ss.sz != n){
//                 solve = max(solve, (ll)ss.sz);
//             }
//         }
//         cout << max(1ll, solve) << nl;
//     }
//     checkmate
// }
