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
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m, s;
vector<pll> ke[1005];

void nhap()
{
    cin >> n >> m >> s;
    int x, y, w;
    FOR(i,0,m)
    {
        cin >> x >> y >> w;
        ke[x].pb({y,w});
        ke[y].pb({x,w});
    }
}

void dijkstra()
{
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.push({0,s});
    vector<ll> d(n+1, 1e9); d[s] = 0;
    while(!q.empty())
    {
        pll top = q.top(); q.pop();
        ll dist = top.fi;
        int u = top.se;
        if(dist > d[u]) continue;
        for(pll e : ke[u])
        {
            ll v = e.fi; ll w = e.se;
            if(d[v] > d[u] + w) 
            {
                d[v] = d[u] + w;
                q.push({d[v],v});
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << d[i] << ' ';
    cout << "\n";
}
void solve()
{
    FOR(i,0,1005) ke[i].clear();
    nhap();
    dijkstra();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}
