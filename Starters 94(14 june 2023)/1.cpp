#include <iostream>
#include <vector>

using namespace std;

bool isSubsequence(vector<int>& nums, int target) {
    int n = nums.size();
    int result = target;
    
    for (int i = 0; i < n; i++) {
        result &= nums[i];
        if (result == target) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, target;
        cin >> n >> target;
        
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        if (isSubsequence(nums, target)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
