// briute force approach

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();

    // Check pairs
    for (int i = 0; i < n - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }
    return nums[n - 1];
}
int main() {
    vector<int> nums;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the sorted elements \n";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    int result = singleNonDuplicate(nums);
    cout << "The single element is: " << result << endl;

    return 0;
}