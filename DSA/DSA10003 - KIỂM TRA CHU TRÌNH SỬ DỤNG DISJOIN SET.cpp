#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m;
int ok = 0;
int check[1005];
vector<int> ke[10005];

bool DFS(int u, int par)
{
    check[u] = 1;
    for(int v : ke[u])
    {
        if(!check[v]) 
        {
            if(DFS(v,u)) return true;
        }
        else if(v != par) return true;
    }
    return false;
}

void solve()
{
    cin >> n >> m;
    FOR(i,1,10005) ke[i].clear();
    FOR(i,1,m+1) 
    {
        int x, y; cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    FOR(i,1,n+1)
    {
        memset(check,0,sizeof(check));
        if(DFS(i,0))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
