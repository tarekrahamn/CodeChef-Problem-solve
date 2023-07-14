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

bool isBeautifulArray(const vector<ll>& a) {
    ll n = a.size();
    FOR(i, 0, n - 1) {
        if ((a[i] % 2) != (a[i + 1] % 2)) {
            return false;
        }
    }
    return true;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        cinv(a)

        if (isBeautifulArray(a)) {
            YES;
        } else {
            ll mmm = *min_element(a.begin(), a.end());
            if (mmm & 1) {
                YES;
            } else {
                NO;
            }
        }
    }

    return 0;
}
/*
// Find the position of the maximum element
    int maxIndex = find(p.begin(), p.end(), maxElement) - p.begin();

    // Reverse the segment [1, maxIndex]
    reverse(p.begin(), p.begin() + maxIndex + 1);

    // Reverse the segment [maxIndex+1, n-1]
    reverse(p.begin() + maxIndex + 1, p.end());

    // Reverse the entire permutation
    reverse(p.begin(), p.end());*/