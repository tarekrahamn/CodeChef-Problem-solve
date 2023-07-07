/*
########## Starting with the name of almighty ALLAH #######################
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ ***********
**************** Author:  tarek200 *************************
**************** Created: 08.05.2023 ***********************
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
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll k=a;k<=b;k++)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
using namespace std;
int main() {
    Tarek
    test{
        string s;
        cin >> s;

        // Check if it can be of both forms
        bool canBeDDMM = true, canBeMMDD = true;

        // Check the first two digits
        if (!(isdigit(s[0]) && isdigit(s[1]))) {
            canBeDDMM = false;
        }
        if (!(isdigit(s[3]) && isdigit(s[4]))) {
            canBeMMDD = false;
        }

        // Check the third and fourth digits
        if (!(isdigit(s[6]) && isdigit(s[7]) && isdigit(s[8]) && isdigit(s[9]))) {
            canBeDDMM = false;
            canBeMMDD = false;
        }

        // Check if it satisfies DD/MM/YYYY
        int day = stoi(s.substr(0, 2));
        int month = stoi(s.substr(3, 2));
        int year = stoi(s.substr(6, 4));

        if (day > 31 || month > 12) {
            canBeDDMM = false;
        }
        if (month == 2) {
            if (day > 29 || (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))) {
                canBeDDMM = false;
            }
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            canBeDDMM = false;
        }

        // Check if it satisfies MM/DD/YYYY
        swap(day, month);

        if (day > 31 || month > 12) {
            canBeMMDD = false;
        }
        if (month == 2) {
            if (day > 29 || (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))) {
                canBeMMDD = false;
            }
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            canBeMMDD = false;
        }

        // Output the result
        if (canBeDDMM && canBeMMDD) {
            cout << "BOTH\n";
        } else if (canBeDDMM) {
            cout << "DD/MM/YYYY\n";
        } else {
            cout << "MM/DD/YYYY\n";
        }
    }

    return 0;
}