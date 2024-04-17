#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m;
vector<vector<int>> ke;
vector<int> check;
int ok = 1; 

void dfs(int u)
{
    for (auto v : ke[u])
    {
        if (check[u] == check[v])
        {
            ok = 0;
            return;
        }
        else if (!check[v])
        {
            check[v] = 3 - check[u];
            dfs(v);
        }
    }
}

void solve()
{   
    ok = 1;
    cin >> n >> m;
    check.clear();
    check.resize(n+1,0);
    ke.clear();
    ke.resize(n+1);
    int x, y;
    FOR(i,0,m)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    FOR(i,1,n+1) 
    {
        if(!check[i]) 
        {
            check[i] = 1;
            dfs(i);
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}






int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}