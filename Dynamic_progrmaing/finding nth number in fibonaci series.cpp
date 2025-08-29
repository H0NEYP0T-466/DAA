#include<iostream>
using namespace std;
int function(int n)
{
	if(n==1 || n==0) return n;
	return function(n-1)+function(n-2);
}
int main()
{
	int n=6;
	cout<<function(n);
}
