#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {             
        for (int j = i + 1; j < n; j++) {      
            if (nums[i] + nums[j] == target) { 
                return {i, j};                 
            }
        }
    }
    return {}; // No solution found
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Numbers: " << nums[ans[0]] << " and " << nums[ans[1]] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}