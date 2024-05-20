#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int V, E, u;
vector<vector<int>> ke(1005);
int check[1005];

void DFS(int u)
{
    check[u] = 1;
    cout << u << ' ';
    for(int v : ke[u]) 
    {
        if(!check[v]) DFS(v);
    }
}

void solve()
{   
    memset(check,0,sizeof(check));
    cin >> V >> E >> u;
    for(int i = 1; i <= V; i++) ke[i].clear();
    while(E--)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    DFS(u);
    cout << "\n";
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}