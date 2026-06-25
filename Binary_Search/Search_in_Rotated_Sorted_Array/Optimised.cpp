#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& A, int target)
{
    int st = 0;
    int end = A.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (A[mid] == target)
        {
            return mid;
        }

        // Left half is sorted.
        if (A[st] <= A[mid])
        {
            if (A[st] <= target && target <= A[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        // Right half is sorted.
        else
        {
            if (A[mid] <= target && target <= A[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1; // Target not found.
}

int main()
{
    vector<int> A = {3 , 4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = search(A, target);

    cout << "Index: " << index << endl;

    return 0;
}