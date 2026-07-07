#include<iostream>
# include<vector>
using namespace std;

int main() {
    int n;
    cin >> n; // number of elements
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int slow = arr[0], fast = arr[0];

    // Slow fast is basically a pointer
    // Phase 1: Detect intersection point
    do {
        // +1
        slow = arr[slow];
        //+2
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Phase 2: Find entrance to cycle (duplicate number)
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << slow << endl;
    return 0;
}