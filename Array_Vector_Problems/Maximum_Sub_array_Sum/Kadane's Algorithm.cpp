//Problem: Maximum Subarray

/*
    Concept: Subarray

    A subarray consists of contiguous (continuous) elements
    taken from the original array.

    Example:
    Original Array: [1, 2, 3, 4, 5]

    Possible Subarrays:
    [1], [2], [3], [4], [5]
    [1, 2], [2, 3], [3, 4], [4, 5]
    [1, 2, 3], [2, 3, 4], [3, 4, 5]
    [1, 2, 3, 4], [2, 3, 4, 5]
    [1, 2, 3, 4, 5]

    Note:
    Elements in a subarray must remain contiguous.
    For example, [1, 3, 5] is NOT a valid subarray.
*/

/*
    Total Number of Subarrays

    For an array of size n,
    Number of subarrays = n * (n + 1) / 2

    Example:
    n = 5
    Number of subarrays = 5 * 6 / 2 = 15
*/

/*
The start position remains fixed while the end position changes.

For each start position, the end position begins from the same index
and moves up to n-1.

Example:
start = 0  -> end = 0, 1, 2, ..., n-1
start = 1  -> end = 1, 2, 3, ..., n-1
start = 5  -> end = 5, 6, 7, ..., n-1
*/

/*
    Print All Possible Subarrays

    Approach:
    - Fix the starting index of the subarray.
    - Extend the ending index from the starting position to the last element.
    - Print all elements between the start and end indices.

    Time Complexity: O(n³)
    Space Complexity: O(1)
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};

    for(int st=0;st<n;st++)
    {
        for(int end=st;end<n;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
    Kadane's Algorithm (Optimized Approach)

    Observation:
    A negative running sum cannot contribute to a future
    maximum subarray. Therefore, if the running sum becomes
    negative, reset it to zero and start a new subarray.
*/

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




