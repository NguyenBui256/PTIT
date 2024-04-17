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
vector<int> ke[1005];
int check[1005];
int par[1005];
int ok = 0;

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
    FOR(i,0,1002) ke[i].clear(); 
    memset(check,0,sizeof(check));
    ok = 0;
    cin >> n >> m;
    int x,y;
    FOR(i,0,m)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    } 
    FOR(i,1,n+1) 
    {
        if(!check[i] && !ok) DFS(i);
        else if(ok) break;
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

// Hinh vuong nho nhat: C[i][j] = min(C[i-1][j-1], min(C[i-1][j], C[i][j-1])) + 1;