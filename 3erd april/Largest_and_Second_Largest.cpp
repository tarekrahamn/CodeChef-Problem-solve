// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int max  = INT_MIN;
//         int max1 = INT_MIN;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             if(arr[i]>max){
//                 max1=max;
//                 max=arr[i];
//             }
//             else if(arr[i]>max1 && arr[i]!=max){
//                 max1 = arr[i];
//             }
//         }
//         int max_sum = max + max1;
//         cout << max_sum << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll max = INT_MIN;
        for (ll i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        ll max1 = INT_MIN;
        for (ll i = 0; i < n; i++) {
            if (arr[i] > max1 ){
                if(arr[i] != max) {
                    max1 = arr[i];
                }
            }
        }
        ll max_sum = max + max1;
        cout << max_sum << endl;
    }
    return 0;
}
