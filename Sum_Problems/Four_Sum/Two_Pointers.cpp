#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int tar) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n; ) {
            int p = j + 1, q = n - 1;

            while (p < q) {
                long long sum = (long long)nums[i] + (long long)nums[j] +
                                (long long)nums[p] + (long long)nums[q];

                if (sum < tar) {
                    p++;
                } else if (sum > tar) {
                    q--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++; q--;

                    while (p < q && nums[p] == nums[p - 1]) p++;
                    while (p < q && nums[q] == nums[q + 1]) q--;
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1]) j++;
        }
    }

    return ans;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter target sum: ";
    cin >> target;

    vector<vector<int>> res = fourSum(nums, target);

    if (res.empty()) {
        cout << "No quadruplets found.\n";   // ✅ handle case when none exist
    } else {
        cout << "Unique quadruplets:\n";
        for (auto &quad : res) {
            for (int x : quad) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
