#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxlength)
{
    int painters = 1, length = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxlength)
            return false;

        if(length + arr[i] <= maxlength)
        {
            length += arr[i];
        }
        else
        {
            painters++;
            length= arr[i];
        }
    }
    return painters > m ? false : true;
}

int paint(vector<int>& arr, int n, int m)
{
    if(m > n)
        return -1;

    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];

    int ans = -1;
    int st = 0, end = sum;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;
        if(isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cout << "Enter number of boards ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter length of each board:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number of painters ";
    cin >> m;

    int result = paint(arr, n, m);
    if(result == -1)
        cout << "Allocation not possible!" << endl;
    else
        cout << "Minimum time is  = " << result << endl;

    return 0;
}