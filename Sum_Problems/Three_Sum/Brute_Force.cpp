#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s; // to store unique triplets

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    std::sort(trip.begin(), trip.end());

                    // if not exists
                    if (s.find(trip) == s.end()) {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
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
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = threeSum(nums);

    if (result.empty()) {
        cout << "No triplets found.\n";
    } else {
        cout << "Unique triplets with sum 0 are:\n";
        for (auto &trip : result) {
            cout << "[ ";
            for (int x : trip) cout << x << " ";
            cout << "]\n";
        }
    }

    return 0;
}
