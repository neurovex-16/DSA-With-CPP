#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> leftSmaller(n, 0); // left smaller nearest
        vector<int> rightSmaller(n, 0); // right smaller nearest
        stack<int> s;
        
        // right smaller
        for(int i = n-1; i>=0; i--)
        {
            while(s.size()>0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }

            // if there is no smaller element on the right, we will take n as the index
            rightSmaller[i]=s.empty() ? n: s.top();
            s.push(i);
        }
 
       // re-inialize stack
       while(!s.empty())
       {
        s.pop();
       }

      // left smaller
     for(int i = 0; i<n;i++)
     {
        while(s.size()>0 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }

         leftSmaller[i]=s.empty() ? -1 : s.top();
         s.push(i);
      }

      int ans=0;
      for(int i=0;i<n;i++)
      {
        int width=rightSmaller[i]-leftSmaller[i]-1;
        int currArea=heights[i]*width;
        ans=max(ans,currArea);
      }
      return ans;
    }
};
