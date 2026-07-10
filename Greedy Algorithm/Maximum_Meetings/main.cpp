#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:

    // {{start, finish}, index}
    static bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b) {

        // If the finish time is same, then sort according to index(smaller)
        if (a.first.second == b.first.second)
            return a.second < b.second;

        return a.first.second < b.first.second;
    }

    vector<int> maxMeetings(vector<int> &start, vector<int> &finish) {

        int n = start.size();

        vector<pair<pair<int,int>,int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({{start[i], finish[i]}, i + 1});
        }

        sort(v.begin(), v.end(), cmp);

        vector<int> ans;

        int ansEnd = -1;

        for (int i = 0; i < n; i++) {

            if (v[i].first.first > ansEnd) {

                ans.push_back(v[i].second);

                ansEnd = v[i].first.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};