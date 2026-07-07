#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void subarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> prefixSum(n, 0);

    // Calculating Prefix Sum
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    unordered_map<int, vector<int>> m; 
    bool found = false;

    for (int j = 0; j < n; j++) {
        // If prefix itself equals k → subarray(0..j)
        if (prefixSum[j] == k) {
            cout << "Subarray found: ";
            for (int x = 0; x <= j; x++) cout << arr[x] << " ";
            cout << endl;
            found = true;
        }

        // Check if there exists a prefix that can form sum k
        int val = prefixSum[j] - k;
        if (m.find(val) != m.end()) {
            for (int startIdx : m[val]) {
                cout << "Subarray found: ";
                for (int x = startIdx + 1; x <= j; x++) cout << arr[x] << " ";
                cout << endl;
                found = true;
            }
        }

        // Store prefix sum index
        m[prefixSum[j]].push_back(j);
    }

    if (!found) {
        cout << "No subarray found with sum " << k << endl;
    }
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum k: ";
    cin >> k;

    subarraySum(arr, k);

    return 0;
}
