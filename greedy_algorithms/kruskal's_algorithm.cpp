#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node 
{
    int u, v, w; 
    bool operator<(const node& x) const 
	{
        return w < x.w; 
    }
};
class disjointset 
{
	vector<int> parent, rank;
public:
    disjointset(int m)
    {
        parent.resize(m);
        rank.resize(m, 0);
        for (int i=0;i<m;i++) parent[i]=i;
    }
int findparent(int node) 
{
        if (parent[node] == node) return node;
        return parent[node] = findparent(parent[node]); 
}
void unionset(int u, int v)
{
        u=findparent(u);
        v=findparent(v);
        if(rank[u]>rank[v]) parent[v] = u;
		else if(rank[u] < rank[v]) parent[u] = v;
        else 
		{
            parent[v]=u;
            rank[u]++;
        }
}
pair<int,vector<node>> kruskal(vector<node>& edges, int n)
{
        int mst=0;
        sort(edges.begin(),edges.end());
		vector<node> ans; 
        for (const auto& edge : edges)
		{
            int u=findparent(edge.u);
            int v=findparent(edge.v);
            if (u!=v)
			{
                mst+=edge.w;
                unionset(u,v);
                ans.push_back(edge);
            }
        }
        return {mst,ans};
}
};
int main() {
    int n,m; 
    cout<<"Enter the number of vertices and edges:";
    cin>>n>>m;
    vector<node> edges(m);
    cout<<"Enter the edges (u v w):\n";
    for(int i=0;i<m;i++)
	{
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }
    disjointset obj(n); 
    auto[totalWeight,mstEdges]=obj.kruskal(edges,n);
    for(const auto& edge : mstEdges) 
	{
        cout << edge.u << " -- " << edge.v << " == " << edge.w << "\n";
    }
    cout<<"Total weight of the MST:"<< totalWeight<<"\n";
}
