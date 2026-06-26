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
     bool isSwap=false;
    for(int i=0;i<n-1;i++)
    {
        int SI=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[SI])
            {
              SI=j;
            }
        } 
        if (SI != i)
         {
            swap(arr[i], arr[SI]);
            isSwap = true;
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