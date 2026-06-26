#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end)
{
    vector<int>temp;
    int i=st,j=mid+1;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j]) // >= ----> for descending
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid) // to store rest elements
    {
        temp.push_back(arr[i]);
        i++;
    }
     while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++) // template to original array
    {
        arr[idx+st]=temp[idx];
    }
}

void mergeSort(vector<int>&arr,int st,int end)
{
    if(st<end)
    {
        int mid=st+(end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,st,mid,end);
    }
}

bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
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
        cout << "The array is already sorted.\n";
    } else {
        mergeSort(arr, 0, arr.size() - 1);
        cout << "Sorted array:\n";
        for (int val : arr) {
        cout << val << " ";
    }
    }

    cout << endl;
    return 0;
}