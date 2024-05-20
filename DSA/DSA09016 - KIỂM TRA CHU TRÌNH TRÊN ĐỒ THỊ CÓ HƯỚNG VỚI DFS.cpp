#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int n, m;
vector<int> ke[1005];
int color[1005];
int check[1005];

bool DFS(int u)
{
    color[u] = 1;
    for(int v : ke[u])
    {
        if(color[v] == 0) 
        {
            if(DFS(v)) return true;
        }
        else if(color[v] == 1) return true;
    }
    color[u] = 2;
    return false;
}

void solve()
{
    FOR(i,0,1003) ke[i].clear();
    memset(color,0,sizeof(color));
    cin >> n >> m;
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        ke[x].pb(y);
        // ke[y].pb(x);
    }
    FOR(i,1,n+1) 
    {
        if(color[i] == 0)
        {
            if(DFS(i))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
    {
        solve();
    }
}