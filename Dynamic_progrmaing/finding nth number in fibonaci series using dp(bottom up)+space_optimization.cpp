#include<iostream>
using namespace std;
int function(int n)
{
	
	//if(n==1 || n==0) return n;
	int prev2=0;
	int prev1=1;
	for(int i=2;i<=n;i++)
	{
		int current=prev1+prev2;
		prev2=prev1;
		prev1=current;
	}
	return prev1;
}
int main()
{
	int n=6;
	cout<<function(n);
}
