#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

struct edge{
	int x,y,w;
};

int n, m;
int parent[1001];
int sz[1001];

void nhap()
{
	cin >> n >> m;
	vector<edge> E;
	for(int i = 1; i <= n; i++)
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

void Find(int u)
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
	int d = 0;
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
	if(MST.size() <!=> n - 1) 
	{
		cout << "Do thi khong lien thong\n";
	}
	else
	{
		cout << "do dai cay khung cuc tieu la: " << d << "\n";
		for(edge e : MST) 
		{
			cout << e.x << ' ' << e.y << ' ' << e.w << "\n";
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	nhap();
	init();
	Kruskal();
}
