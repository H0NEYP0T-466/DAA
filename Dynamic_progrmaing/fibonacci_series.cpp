#include<iostream>
using namespace std;
int fibonacci(int limit)
{
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i>=0;i++)
	{
		int next=a+b;
		if(next>=limit) break;
		cout<<next<<" ";
		a=b;
		b=next;
	}
	
}
int main()
{
	int lim=20;
	int ans=fibonacci(lim);
}
