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

int n, m, k;
vector<int> ke[200005];
ll child[200005], ans[200005];

void dfs(int u)
{
    for(int v : ke[u])
    {
        dfs(v);
        child[u] += child[v] + 1; //so nut con cua v && nut v
        ans[u] += ans[v];
    }
    ans[u] += child[u]; //moi nut con +1 gia tri
}

void solve()
{
    cin >> n;
    FOR(i,1,n+1) 
    {
        ans[i] = 1;
        child[i] = 0;
    }
    FOR(i,2,n+1)
    {
        int x; cin >> x;
        ke[x].pb(i);
    }
    dfs(1);
    FOR(i,1,n+1) cout << ans[i] << ' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // TEST
    {
        solve();
    }
}
