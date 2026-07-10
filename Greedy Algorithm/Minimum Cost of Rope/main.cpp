#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
  public:
    int minCost(vector<int>& arr) {
        // Min Heap
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        
        int n = arr.size();
        
        for(int i = 0;i < n;i++){
            pq.push(arr[i]);
        }
        
        long long cost = 0;
        
        while(pq.size() > 1){
            long long first = pq.top();
            pq.pop();
            
            long long second  = pq.top();
            pq.pop(); 
            
            long long mergeLength = first + second;
            cost+= mergeLength;
            
            pq.push(mergeLength);
        }
        return cost;
    }
};