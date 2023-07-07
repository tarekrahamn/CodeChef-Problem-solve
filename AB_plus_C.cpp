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
void run(){
    ll x;
        cin >> x;
        if(x==1){
            cout << -1 << endl;
            return;
        }
         if(x%100000==0){
            cout << (x/1000000-1) << " " << 10000000 << " " << 1000000 << endl;
            return;
        }
        else if(x<=1000000){
            cout << 1 << " " << 1 << " " << x-1 << endl;
            return;
        }
        else{
            cout << (x/1000000) << " " << 10000000 << " " << (x %1000000) << endl;
            return;
        }
}
int main (){
    Tarek
    test {
       run();
    }
    return 0;
}