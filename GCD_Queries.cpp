/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 12.04.2023 ************************\\
**/
#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   test            ll t;cin>>t;while(t--)
#define   pb              push_back
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
const int N               = (int) 1e6+5;
const int M               = (int) 1e9+5;
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    Tarek 
    test{
        int n;
        cin >> n; // Size of the array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input array elements
        }

        int q;
        cin >> q; // Number of queries
        vector<int> queries(q);
        for (int i = 0; i < q; i++) {
            cin >> queries[i]; // Input queries
        }

        // Process each query
        for (int i = 0; i < q; i++) {
            int x = queries[i]; // Current query
            int result = -1; // Initialize result to -1

            // Find the first element in the array that satisfies the condition gcd(x, k) > 1
            for (int j = 0; j < n; j++) {
                if (gcd(x, arr[j]) > 1) {
                    result = arr[j];
                    arr[j] = -1; // Mark the element as used
                    break;
                }
            }

            // If no such element is found, print and remove the smallest element from the array
            if (result == -1) {
                result = *min_element(arr.begin(), arr.end());
                arr.erase(min_element(arr.begin(), arr.end()));
            }

            cout << result << " ";
        }

        cout << endl;
    }

    return 0;
}
