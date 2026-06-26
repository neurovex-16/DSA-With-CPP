#include <iostream>
#include <vector>
using namespace std;

// Partition function
int partition(vector<int>&arr, int st, int end) {
    int pivot = arr[end]; // pivot = last element
    int idx= st - 1;     // index of smaller element

    for (int j = st; j < end; ++j) {
        if (arr[j] <= pivot) {          // >= ---> descending order
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

// QuickSort function
void quickSort(vector<int>& arr, int st, int end) {
    if (st<end) {
        int pi = partition(arr,st,end); // partition index
        quickSort(arr, st, pi - 1);        // left part
        quickSort(arr, pi + 1, end);       // right part
    }
}

// if the array is already sorted
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

      if (isSorted(arr)) {
        cout << "Array is already sorted.\n";
    } else {
        quickSort(arr, 0, n - 1);
        cout << "Sorted array: ";
        for (int x : arr) cout << x << ' ';
        cout << '\n';
    }
  
    return 0;
}
