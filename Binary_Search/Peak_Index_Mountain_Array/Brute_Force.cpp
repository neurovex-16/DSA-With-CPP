#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the size of the mountain array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the mountain array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "The peak index is: " << peakIndex << endl;

    return 0;
}


