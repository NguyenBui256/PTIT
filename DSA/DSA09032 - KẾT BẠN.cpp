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
int ans = 0;

void DFS(int u)
{
    // cout << u << ' ' << cnt << "\n";
    check[u] = 1;
    ans++;
    for(int v : ke[u])
    {
        if(!check[v]) 
        {
            DFS(v);
        }
    }
}

void solve()
{   
    ans = 0;
    cin >> n >> m;
    check.clear();
    check.resize(n+1);
    ke.clear();
    ke.resize(n+1);
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    int Max = 0;
    FOR(i,1,n+1) 
    {
        ans = 0;
        check.clear();
        DFS(i);
        Max = max(Max, ans);
    }
    cout << Max << "\n";
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