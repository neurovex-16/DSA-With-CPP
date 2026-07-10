#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        
        sort(prices.begin(),prices.end());
        
        int mini = 0;
        int buy = 0;
        int free = n-1;
        
        while(buy <= free){
            mini+=prices[buy];
            buy++;
            free = free - k;
        }
        
        int max = 0;
        buy = n-1;
        free = 0;
        
        while(free <= buy){
            max+=prices[buy];
            buy--;
            free = free + k;
            
        }
        
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(max);
        return ans ;
        
    }
};