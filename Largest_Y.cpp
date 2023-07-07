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
int main()
{
    Tarek
    ll t = 1;
    scanf("%lld", &t);
    for (ll i = 1; i <= t; i++){
        ll n, x;
        scanf("%lld %lld", &n, &x);
        ll a[n];
        for (ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        ll ans = 0;
        for (ll i = 0; i < 30; i++){
            ll m = 0;
            for (ll j = 0; j < n; j++)
                if ((a[j] >> i) & 1){
                     m |= 1;
                }else{
                     m |= 2;
                }
            if (m != 3){
                continue;
            }
            ll t = x;
            if ((t & (1LL << i)) != 0){
                t = t - ((t >> i) & 1) * (1 << i);
                for (ll j = i - 1; j >= 0; j--){
                    t |= 1 << j;
                }
            }

            ans = ans > t ? ans : t;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
