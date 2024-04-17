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
vector<int> ke[1005];
int check[1005];
int cnt[1005];

void dfs(int u)
{
    cnt[u]++;
    check[u] = 1;
    for(int v : ke[u])
    {
        if(!check[v]) dfs(v);
    }
}

void solve()
{
    cin >> k >> n >> m;
    vector<int> nguoi(k);
    FOR(i,0,k) cin >> nguoi[i];
    int x, y; 
    FOR(i,0,m)
    {
        cin >> x >> y;
        ke[x].pb(y);
    }
    FOR(i,0,k)
    {
        memset(check,0,sizeof(check));
        dfs(nguoi[i]);
    }
    int ans = 0;
    FOR(i,1,n+1)
    {
        if(cnt[i] == k) ans++;
    }
    cout << ans << "\n";
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
