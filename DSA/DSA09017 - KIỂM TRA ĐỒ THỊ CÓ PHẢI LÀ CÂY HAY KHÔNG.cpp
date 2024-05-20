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
set<int> ke[1005];
int par[1005];
int check[1005];
int ok = 0, fin;

void DFS(int u)
{
    check[u] = 1;
    for(int v : ke[u])
    {
        if(!check[v])
        {
            par[v] = u;
            DFS(v);
        }
        else if(v != par[u])
        {
            ok = 1;
            return;
        }
    }
}

void solve()
{
    ok = 0;
    FOR(i,0,1003) ke[i].clear();
    memset(par,0,sizeof(par));
    memset(check,0,sizeof(check));
    cin >> n;
    int x, y;
    FOR(i,0,n-1) 
    {
        cin >> x >> y;
        ke[x].insert(y);
        // ke[y].insert(x);
    }
    FOR(i,1,n+1)
    {
        if(!check[i])
        {
            DFS(i);
            if(ok) break;
        }
    }  
    if(!ok) cout << "YES\n";
    else cout << "NO\n";
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