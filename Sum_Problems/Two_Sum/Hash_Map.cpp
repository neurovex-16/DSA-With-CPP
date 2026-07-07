#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr, int tar) {
    unordered_map<int,int> m; // value -> index
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int sec = tar - first;

        if (m.find(sec) != m.end()) { // Found the complement
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i; // Store current value with its index
    }
    return ans;
}

int main() {
    int n, tar;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> tar;

    vector<int> ans = twoSum(arr, tar);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Numbers: " << arr[ans[0]] << " and " << arr[ans[1]] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}

