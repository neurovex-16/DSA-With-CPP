#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st = 0, end = arr.size() - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
            return mid;
        } else if (arr[mid-1] < arr[mid]) {
            st = mid + 1;
        }
        else{
            end = mid -1 ;
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