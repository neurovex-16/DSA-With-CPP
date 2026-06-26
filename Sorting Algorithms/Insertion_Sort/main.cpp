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
     bool isSorted = false;
    for(int i=1;i<n;i++)
    {
       int curr=arr[i];
       int prev=i-1;
         if (arr[prev] > curr) {
            isSorted = true; 
        }
       while(prev>=0 && arr[prev]>curr)
       {
        arr[prev+1]=arr[prev];
        prev--;
       }
       arr[prev+1]=curr;
    }

    if (!isSorted) {
        cout << "The array was already sorted.\n";
    }
    else {
    cout << "Array after sorting \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}
    cout << endl;
    return 0;
}