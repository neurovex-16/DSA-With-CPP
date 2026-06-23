/*
    Find the majority element in the array.

    If the size of an array is n then majority element is an element that appears
    more than n/2 times.
*/

/*
    Approach: Brute Force

    Count the frequency of each element and
    identify the element that appears more than n/2 times.

    Time Complexity: O(n²)
    Space Complexity: O(1)
*/

/*
#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return arr[i]; 
    }
    return -1; 
}

int main() {
    int arr[] = {3, 1, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = findMajorityElement(arr, n);
    if (majority != -1)
        cout << "Majority element is: " << majority << endl;
    else
        cout << "No majority element" << endl;
    return 0;
}
*/

/*
    Better Approach: Sorting

    After sorting, the majority element will
    always occupy the middle position of the array.

    Time Complexity: O(n log n)
    Space Complexity: O(1)
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {2,2,1,1,1,2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1; 
        }
        if (count > n / 2) {
            cout << "Majority element is: " << arr[i] << endl;
            return 0;
        }
    }
    cout << "No majority element" << endl;
    return 0;
}
*/


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

