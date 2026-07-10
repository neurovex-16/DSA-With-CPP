#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
  public:
  // sort according to end time 
  static bool cmp(pair<int,int>a,pair<int,int>b){
      return a.second < b.second;
  }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();
        vector<pair<int,int>>v;
        
        for(int i = 0; i < n; i++){
            v.push_back({start[i], finish[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int count = 1;
        int ansEnd = v[0].second;
        
        for(int i = 1; i < n; i++){
            if(v[i].first > ansEnd){
                count++;
                ansEnd = v[i].second;
            }
        }
            return count;
        }
};