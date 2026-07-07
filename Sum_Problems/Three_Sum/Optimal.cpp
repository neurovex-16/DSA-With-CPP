#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Two-Pointer Approach
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;
                while (j < k && nums[j] == nums[j - 1]) j++; // skip duplicate j
                while (j < k && nums[k] == nums[k + 1]) k--; // skip duplicate k
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = threeSum(nums);

    cout << "Unique triplets with sum = 0 are:\n";
    if (result.empty()) {
        cout << "No triplets found.\n";
    } else {
        for (auto &triplet : result) {
            cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
        }
    }
    return 0;
}
