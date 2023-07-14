/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 12.05.2023 ***********************
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
#define   FOR(i,a,b)        for(ll i=a;i<b;i++)
#define   LOOP(a,b)       for(ll j=a;j<b;j++)
#define   LOOP2(a,b)       for(ll k=a;k<=b;k++)
const long long int N               = (int) 1e7+1;
const long long int M               = (int) 1e9+5;
using namespace std;
void run(){
    ll a;
    cin>>a;
    vll v(a);
    cinv(v)
    ll cnt=1,an=0;
    FOR(i,0,n+1)
    {
        if(v[i]%2!=v[i-1]%2)
        {
            an+=cnt-1;
            cnt=1;
        }
        else cnt++;
    }
    an+=cnt-1;
    cout<<an<<nl;
}
int main(){
   Tarek
   test{
    run();
   }
   checkmate
}

