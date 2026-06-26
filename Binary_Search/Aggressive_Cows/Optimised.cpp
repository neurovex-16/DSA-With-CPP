#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int mindist) { //N
    int cows = 1;
    int lastPos = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= mindist) {
            cows++;
            lastPos = arr[i];
        }
        if (cows >= m)
            return true;
    }
    return false;
}

int allocateCows(vector<int>& arr, int n, int m) {
    sort(arr.begin(), arr.end()); 

    int st = 1;
    int end = arr[n - 1] - arr[0];
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of stalls: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the positions of the stalls one by one:\n";
    for (int i = 0; i < n; i++) {
        cout << "Position " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the number of cows to place: ";
    cin >> m;

    int result = allocateCows(arr, n, m);

    cout << "\n===== Result =====\n";
    if (result == -1)
        cout << "Allocation not possible with given inputs!\n";
    else
        cout << "The largest possible minimum distance between any two cows is: " << result << endl;

    return 0;
}

