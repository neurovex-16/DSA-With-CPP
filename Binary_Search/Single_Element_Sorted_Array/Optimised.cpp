#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];

    int st = 0, end = n - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if(mid == 0 && nums[0]!=nums[1]) return nums[mid];
        if(mid == n-1 && nums[n-1]!= nums[n-2]) return nums[mid];
        if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
        
        if (mid % 2 == 0) { // even
        if (nums[mid - 1] == nums[mid]) {
        end = mid - 1;
        }
        else {
        st = mid + 1;
        }
        }

        else { // odd
        if (nums[mid - 1] == nums[mid]) {
        st = mid + 1;
        } 
        else {
        end = mid - 1;
      }
     } 
    }
    return -1;
}

int main() {
    vector<int> nums;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the sorted elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "The single element is: " << singleNonDuplicate(nums);

    return 0;
}