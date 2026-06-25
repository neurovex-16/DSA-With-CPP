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
