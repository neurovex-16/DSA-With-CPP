#include<iostream>
# include<vector>
# include<unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n; // number of elements
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> s;
    int duplicate = -1;

    for (int val : nums) {
        if (s.find(val) != s.end()) {
            duplicate = val;
            break;
        }
        s.insert(val);
    }

    cout << duplicate << endl; // prints the first duplicate found
    return 0;
}
