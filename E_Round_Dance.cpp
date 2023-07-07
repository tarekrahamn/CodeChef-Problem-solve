#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define str string
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define umii unordered_map<int,int>
#define umis unordered_map<int,string>
#define umic unordered_map<int,char>
#define umci unordered_map<char,int>
#define umsi unordered_map<string,int>
#define umcs unordered_map<char,string>
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define srt(a) sort(a.begin(),a.end());
#define fr(i,n) for(int i=0;i<n;i++)

void mip(int &a, int &b){cin>>a>>b;}
void mip(int &a, int &b, int &c){cin>>a>>b>>c;}
void mip(int &a, int &b, int &c, int &d){cin>>a>>b>>c>>d;}
vi vip(int n){int x;vi v;while (n--){cin >> x;v.push_back(x);}return v;}
 
int iip(){int x;cin >> x;return x;}
 
str sip(){str s;cin>>s;return s;}
 
class soln{
    public:
    void solve(){
        int n=iip();
        vi v=vip(n);
        int mx = 0,mn = 0,tmp = 0,cc=0;
        vector<usi> aL(n+1);
        vector<bool> vis(n+1, 0);
        for(int i=0; i<n; i++){
            aL[i+1].insert(v[i]);
            aL[v[i]].insert(i+1);
        }
        for(int i=1; i<=n; i++){
            if(!vis[i]){
                cc = 0;
                help(i, aL, cc, vis);
                if(cc >= 2) tmp++;
                mx++;
            }
            if(tmp > 0) mn = mx-tmp+1;
            else mn = mx;
        }
        cout << mn << " " << mx << endl;
    }

    void help(int i, vector<usi> &aL, int &cc, vector<bool> &vis)
    {
        vis[i] = 1;
        if(aL[i].size() == 1) cc++;
        for(auto j: aL[i]){
            if(!vis[j]) help(j, aL, cc, vis);
        }
    }
};
 
 
int main(){int tstcs = iip();while (tstcs--){soln s;s.solve();}return 0;}