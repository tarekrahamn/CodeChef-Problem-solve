#include <bits/stdc++.h>
#define   int             long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int32_t>
#define   vll             vector<int>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>

//-----------------------------------------------------------------------------------------

#define   pb              push_back
#define   ppb             pop_back
#define   mp              make_pair
#define   eb              emplace_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   ONLINE_JUDGE
#define   checkmate       return 0;
#define   nl              "\n"

//-----------------------------------------------------------------------------------------------

#define   MOD             1000000007
#define   MOD1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462

//----------------------------------------------------------------------------------------------------

#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a*b)/gcd(a,b)
#define   dbug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()

//-----------------------------------------------------------------------------------------------------------------

#define   cinv(v)         for(auto &it:v)cin>>it;
#define   fo(i,a,b)      for(int i=a;i<b;i++)
#define   fora(i,a,b)     for(int j=a;j<b;j++)
#define   fora2(i,a,b)    for(int i=a;i<=b;i++)
#define   rof(i, a, b)    for (int i = a; i >=b; i--)
const int N = (int) 1e5 + 10;
const int X = (int) 1e8;
using namespace std;

//-----------------------------------------------------------------------------------------------------//

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

//-----------------------------------------------------------------------------------------------------//
int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    return gcd(m, n % m);
}
void run(int t){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    fo(i, 0, n){
        cin >> a[i];
    }
    //sort(all(a));
    cout << a[0] << " ";
    fo(i, 1, n) {
        int need = k/a[i];
        int lex = need* a[i];
        int ans = gcd(lex, a[i - 1]);
        while (ans != a[i]) {
            lex -= a[i];
            ans =gcd(lex, a[i - 1]); 
        }
        cout << lex << " ";
    }
    cout << nl;
}

//---------------------------------------------------------------------------------------------------------------

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input2.txt",  "r",  stdin);
    freopen("output2.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while (t--){
        run(t);
    }
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}