#include <bits/stdc++.h>
using namespace std;
#define     ll                                long long int
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,p,q;
        cin >> n,p,q;
        string s;
        cin >> s;
        int num=min(25,p);
        int num2= min(25,q);
        for(int i=0;i<n;i++){
            if(p>0){
                for(int j=0;j<num;j++){
                    s[i]=(s[i]=='z')?'a':s[i]+1;
                    if(s[i]=='b'){
                        break;
                    }
                    p-=num;
                }
            }
            else if(q>0){
                for(int j=0;j<num2;j++){
                    s[i]=(s[i]=='a')?'z':s[i]-1;
                    if(s[i]=='y'){
                        break;
                    }
                    q-=num2;
                }
            }else{
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}