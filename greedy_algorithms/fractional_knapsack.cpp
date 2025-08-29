#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
      static bool cmp(pair<double, int> a, pair<double, int> b)
      {
          return a.first > b.first;
      }
        // Function to get the maximum total value in the knapsack.
        double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
    vector<pair<double,int>> v;
    int n = val.size();
    for(int i = 0; i < n; i++) {
        double valuePerUnit = (1.0 * val[i]) / wt[i];
        v.push_back({valuePerUnit, i});
    }
    sort(v.begin(), v.end(), cmp);
    
    double totalValue = 0.0;
    for(int i = 0; i < n && capacity > 0; i++) {
        int index = v[i].second;
        if(capacity >= wt[index]) {
            totalValue += val[index];
            capacity -= wt[index];
        } else {
            totalValue += v[i].first * capacity;
            capacity = 0;
        }
    }
    return totalValue;
}
};
int main()
{
	vector<int> value;
	value.push_back(25);
	value.push_back(24);
	value.push_back(15);
	vector<int> weight;
	weight.push_back(18);
	weight.push_back(15);
	weight.push_back(10);
	int c=20;
	Solution obj;
	double answer=obj.fractionalKnapsack(value,weight,c);
	cout<<answer;
}
