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

int n, m, u;
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
    cin >> u; // source;
}

int Mat[1005][1005];

int n; 

void Floyd()
{
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        E.clear();
        nhap();
        Bell_Manford(u);
    }
}