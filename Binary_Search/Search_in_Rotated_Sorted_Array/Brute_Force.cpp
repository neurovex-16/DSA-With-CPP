#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int target)
{
    // Traverse the array to find the target.
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1; // Target not found.
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = search(arr, target);

    if(index != -1)
    {
        cout << "Target found at index: " << index << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}