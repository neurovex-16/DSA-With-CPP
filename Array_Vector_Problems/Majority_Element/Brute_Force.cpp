/*
    Approach: Brute Force

    Count the frequency of each element and
    identify the element that appears more than n/2 times.
*/

#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return arr[i]; 
    }
    return -1; 
}

int main() {
    int arr[] = {3, 1, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = findMajorityElement(arr, n);
    if (majority != -1)
        cout << "Majority element is: " << majority << endl;
    else
        cout << "No majority element" << endl;
    return 0;
}
