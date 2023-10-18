#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--)
#define fi first
#define se second

struct edge{
	int x,y,w;
};

int n, m;
int parent[200005];
int sz[200005];
vector<edge> E;


void nhap()
{
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
	{
		edge e;
		cin >> e.x >> e.y >> e.w;
		E.push_back(e);
	}
}

void init()
{
	for(int i = 1; i <= n; i++)
	{
		parent[i] = i;
		sz[i] = 1;
	}
}

int Find(int u)
{
	if(u == parent[u]) return u;
	return parent[u] = Find(parent[u]);
}

bool Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if(u == v) return false; // ko gop dc
	else if(sz[u] > sz[v]) 
	{
		parent[v] = u;
		sz[u] += sz[v];
	}
	else
	{
		parent[u] = v;
		sz[v] += sz[u];
	}
	return true;
}

void Kruskal()
{
    vector<edge> MST;
	ll d = 0;
	sort(E.begin(), E.end(), [](edge a, edge b)->bool{
		return a.w < b.w;
	});
	for(edge e : E)
	{
		if(MST.size() == n - 1) break;
		if(Union(e.x,e.y))
		{
			d += e.w;
			MST.push_back(e);
		}
	}
    if(MST.size() < n - 1) cout << 0 << "\n";
    else cout << d << "\n";
}



int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        E.clear();
        nhap();
	    init();
	    Kruskal();
    }
}