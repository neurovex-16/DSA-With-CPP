/*
    Optimal Approach: Boyer-Moore Voting Algorithm

    Identify a candidate for the majority element
    and verify it using a voting mechanism.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    if (count > n / 2)
        cout << "Majority element is: " << candidate << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}

