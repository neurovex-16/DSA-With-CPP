#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {

        int n = deadline.size();

        vector<pair<int, int>> jobs;

        int maxDeadline = 0;

        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
            maxDeadline = max(maxDeadline, deadline[i]);
        }

        // Sort by profit (descending)
        sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());

        // slot[i] = whether time slot i is occupied
        vector<int> slot(maxDeadline + 1, -1);

        int jobCount = 0;
        int totalProfit = 0;

        for (auto job : jobs) {

            int p = job.first;
            int d = job.second;

            // Find latest free slot
            for (int j = d; j >= 1; j--) {

                if (slot[j] == -1) {
                    slot[j] = 1;
                    jobCount++;
                    totalProfit += p;
                    break;
                }
            }
        }

        return {jobCount, totalProfit};
    }
};