/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** author:  tarek200 *************************\\
**************** created: 22.03.2023 ************************\\
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
    int n;
    scanf("%d",&n);
    vector<int>dp(n);
    vector<int>dp2(n);
    for(int i=0;i<n;i++) scanf("%d", &dp[i]);
    for(int i=0;i<n;i++) scanf("%d", &dp2[i]);
    if(dp[0]!=dp2[0]){
        printf("NO\n");
        return;
    }
    if(dp[n-1]!=dp2[n-1]){
        printf("NO\n");
        return;
    }
    int count=0, count2=0;
    for(int i=0;i<n;i++){
        if(dp[i]==0){
            count++;
        }
        else{
             count2++;
        }
    }
    for(int i=1;i<n-1;i++){
        if(dp[i]!=dp2[i] && dp[i]==0 && count2==0){
            printf("NO\n");
            return;
        }
        if(dp[i]!=dp2[i] && dp[i]==1){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
    return;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        UIU();
    }
    return 0;
}
