#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:

    static bool cmp(pair<double, pair<int,int>> a,
                    pair<double, pair<int,int>> b)
    {
        return a.first > b.first;
    }

    double fractionalKnapsack(vector<int>& val,
                              vector<int>& wt,
                              int capacity) {

        vector<pair<double, pair<int,int>>> v;

        int n = val.size();

        for(int i=0;i<n;i++){

            double perUnitValue = (1.0 * val[i]) / wt[i];

            v.push_back({perUnitValue,{val[i],wt[i]}});
        }

        sort(v.begin(),v.end(),cmp);

        double totalValue = 0;

        for(int i=0;i<n;i++){

            int value = v[i].second.first;
            int weight = v[i].second.second;

            if(weight > capacity){

                totalValue += capacity * v[i].first;
                capacity = 0;
                break;
            }
            else{

                totalValue += value;
                capacity -= weight;
            }
        }

        return totalValue;
    }
};