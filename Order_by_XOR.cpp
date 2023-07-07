/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** author:  tarek200 *************************\\
**************** created: 29.03.2023 ************************\\
*
**/
#include <bits/stdc++.h>
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
void UIU(){
    ll x, y, z;
    scanf("%lld%lld%lld", &x, &y, &z);
    ll xx, low, high, mid;
    xx = low = -1; low++;
    high = (1LL << 30) - 1;
    while (low <= high) {//binary search
        mid = (low + high) / 2;
        if ((x^mid) < (y^mid) && (y^mid) < (z^mid)) {
            xx = mid;
            break;
        }
        else if ((x^mid) < (y^mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("%lld\n", xx);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        UIU();
    }
    return 0;
}