#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<pair<int,int>> arr;// pair ( Value,Index)
    for (int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }
    // Sort 
    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1;

    while (left < right) {
        // smallest + largest value
        int sum = arr[left].first + arr[right].first;

        if (sum == target) {
            // index 
            return {arr[left].second, arr[right].second};
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    return {}; // No solution
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