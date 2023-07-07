/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** author:  tarek200 *************************\\
**************** created: 22.03.2023 ************************\\
*
**/
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define     ll                                long long int
#define     ull                               unsigned long long int
#define     pb                                push_back
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   MOD                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
const int   X                               = 100000;
// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if((a+1)%b == (c+1)%d){
            printf("1\n");
            continue;
        }
        ll x = a;
        ll y = a % b;
        a -= y;
        ll gcd = b, temp = d;
        while(temp){
            ll tmp = temp;
            temp = gcd % temp;
            gcd = tmp;
        }
        ll lcm = (b * d) / gcd;
        printf("%lld\n", lcm + a - x);
    }
    return 0;
}
