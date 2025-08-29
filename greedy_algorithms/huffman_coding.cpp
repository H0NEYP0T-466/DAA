#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node
{
	public:
	int data;
	char c;
	node* left;
	node* right;
	node(int d,char cc)
	{
		this->c=cc;
		this->data=d;
		this->left=nullptr;
		this->right=nullptr;
	 } 
};
class cmp
{
	public:
		bool operator()(node* a,node* b)
		{
			return a->data>b->data;
		}
};
class solve
{
	public:
		void traverse(node* root,vector<pair<char,string>>& ans,string temp)
		{
			if(!root->left && !root->right)
			{
				ans.push_back({root->c,temp});
				return;
			}
			traverse(root->left,ans,temp+'0');
			traverse(root->right,ans,temp+'1');
		}
		vector<pair<char,string>>huffman(int arr[],int n,char arr2[])
		{
			priority_queue<node* ,vector<node*>,cmp> pq;
			for(int i=0;i<n;i++)
			{
				node* temp = new node(arr[i], arr2[i]);
				pq.push(temp);
			}
			while(pq.size()>1)
			{
				node* left=pq.top();
				pq.pop();
				node* right=pq.top();
				pq.pop();
				node* newnode=new node(left->data+right->data,'$');
				newnode->left=left;
				newnode->right=right;
				pq.push(newnode);
			}
			node* root=pq.top();
			vector<pair<char,string>> ans;
			string temp="";
			traverse(root,ans,temp);
			return ans;
		}
};
int main()
{
	solve obj;
	//string x="abcdef";
	int n=5;
	int arr[n] = {3,7,6,5,9};
	char arr2[n] =  {'a','b','c','d','e'}; 
   vector<pair<char, string>> sol = obj.huffman(arr, n, arr2);
	for(auto p :sol)
	{
		cout<<p.first<<'\t'<<p.second <<endl;
	}
}
