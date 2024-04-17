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
vector<int> check(1005);
// int par[1005];
int ok = 0;

void DFS(int u, int k)
{
    for(int v : ke[u])
    {
        if(check[v]) continue;
        if(k == n){
            ok = 1;
            return;
        }
        check[v] = 1;
        DFS(v,k+1);
        check[v] = 0; //quay lui
    }
}

void solve()
{
    FOR(i,0,1002) ke[i].clear(); 
    check.clear();
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
        check.clear();
        DFS(i,1);
        if(ok) 
        {
            cout << 1 << "\n";
            break;
        }
    }
    if(!ok) cout << 0 << "\n";
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