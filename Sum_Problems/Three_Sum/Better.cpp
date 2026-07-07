#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        // b+c = -a = target
        int target = -nums[i];
        set<int> s;
        for (int j = i + 1; j < n; j++) {
            // c
            int third = target - nums[j];
            if (s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int>> ans = threeSum(nums);

    cout << "Unique triplets that sum to 0 are:\n";
    for (auto &trip : ans) {
        cout << "[ ";
        for (int x : trip) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}


