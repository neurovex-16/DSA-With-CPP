#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& A) {
    int pivot = -1, n = A.size();

    for (int i = n - 2; i >= 0; i--) { //find pivot
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) { // if pivot not found
        reverse(A.begin(), A.end());
        return;
    }

    for (int i = n - 1; i > pivot; i--) { // swap pivot with right most element
        if (A[i] > A[pivot]) {
            swap(A[i], A[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = n - 1;
    while (i <= j) { // reverse rest elements
        swap(A[i++], A[j--]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
