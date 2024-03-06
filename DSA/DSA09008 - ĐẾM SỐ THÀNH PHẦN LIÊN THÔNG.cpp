#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, k, s ,t;
vector<vector<int>> ke(1003);
vector<vector<int>> ans;
int check[1005];

void dfs(int u)
{
    check[u] = 1;
    for(int v : ke[u])
    {
        if(!check[v]) dfs(v);
    }
}

void solve()
{
    ans.clear();
    for(int i = 1; i <= n; i++) ke[i].clear();
    memset(check,0,sizeof(check));
    cin >> n >> k;
    int x,y;
    while(k--)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    int ans = 0;
    FOR(i,1,n+1) 
    {
        if(!check[i]) ans++, dfs(i);
    }
    cout << ans << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}