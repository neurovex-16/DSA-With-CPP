#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
        // if the array is already sorted
        bool isSwap=false;
    for(int i=0;i<n-1;i++)
    {
    // if the array is already sorted
     bool isSwap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            //if(arr[j]<arr[j+1]) for descending 
            {
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }  
    }
     if(!isSwap)
    {
        cout<<"The array is already sorted";
    }
    else 
    {
    cout << "Array after sorting \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
 }
    cout << endl;
    return 0;
}