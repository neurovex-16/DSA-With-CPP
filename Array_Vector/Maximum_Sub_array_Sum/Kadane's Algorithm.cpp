#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int max_sum = arr[0], current_sum = 0;
    int start = 0, end = 0, temp_start = 0;

    for (int i = 0; i < arr.size(); i++) {
        current_sum += arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }

        if (current_sum < 0) {
            current_sum = 0;
            temp_start = i + 1;
        }
    }

    cout << "Maximum Subarray Sum: " << max_sum << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




