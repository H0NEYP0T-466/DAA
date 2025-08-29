#include<iostream>
#include<vector>
using namespace std;
int function(int n,vector<int> dp)
{
	
	if(n==1 || n==0) return n;
	if(dp[n]!=-1) return dp[n];
	dp[n]=function(n-1,dp)+function(n-2,dp);
	return dp[n];
}
int main()
{
	int n=7;
	vector<int> dp(n+1,-1);
	cout<<function(n,dp);
}
