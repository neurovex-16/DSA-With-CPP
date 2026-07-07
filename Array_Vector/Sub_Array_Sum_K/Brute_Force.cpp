#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
                // Print the subarray
                cout << "[ ";
                for (int x = i; x <= j; x++) {
                    cout << nums[x] << " ";
                }
                cout << "]" << endl;
            }
        }
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;  // take size of array and target sum

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = subarraySum(nums, k);

    if (result > 0)
        cout << "Total subarrays found: " << result << endl;
    else
        cout << "No subarray found" << endl;

    return 0;
}
