#include<iostream>
#include<vector>
using namespace std;
int function(int n,vector<int> dp)
{
	
	//if(n==1 || n==0) return n;
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main()
{
	int n=9;
	vector<int> dp(n+1,-1);
	cout<<function(n,dp);
}
