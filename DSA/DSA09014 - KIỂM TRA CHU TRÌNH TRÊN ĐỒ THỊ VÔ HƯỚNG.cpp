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
int ok = 1;
vector<int> ke[1005];
int par[1005];
int check[1005];

void DFS(int u)
{
    check[u] = 1;
    for(auto i : ke[u])
    {
        if(check[i] == 0)
        {
            par[i] = u;
            DFS(i);
        }
        else if(check[i] == 1 && i != par[u])
        {
            ok = 0;
            return;
        }
    }
}

void solve()
{
    memset(check,0,sizeof(check));
    memset(ke,0,sizeof(ke));
    memset(par,0,sizeof(par));
    ok = 1;
    cin >> n >> m;
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    FOR(i,1,n+1) 
    {
        if(check[i] == 0 && ok)
        {
            DFS(i);
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