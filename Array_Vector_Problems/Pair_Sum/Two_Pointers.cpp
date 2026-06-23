/*
    Problem: Pair Sum
    Approach: Two Pointers

    Since the array is sorted, use two pointers
    to find the target pair efficiently.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>nums,int target)
{
vector<int>ans;
int n=nums.size();
int i=0,j=n-1;
while(i<j){
    int pairSum=nums[i]+nums[j];
    if(pairSum > target){
        j--;
    }
    else if(pairSum<target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
  }
  return {};
}
int main()
{   
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=pairSum(nums,target);
    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
        cout << "Values: " << nums[ans[0]] << " + " << nums[ans[1]] << " = " << target << endl;
    } else {
        cout << "No pair found that sums to the target." << endl;
    }
    return 0;
}
