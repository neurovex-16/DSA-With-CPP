#include<iostream>
#include<vector>
#include<algorithm>  

using namespace std;

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sort(nums.begin(), nums.end());
    cout << "Sorted array: ";
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}