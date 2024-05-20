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

int n, m, s;
int ok = 0;
int check[1005];
vector<int> ke[10005];
vector<pair<int,int>> v;

void DFS(int u)
{
    check[u] = 1;
    queue<int> q; 
    q.push(u);
    while(!q.empty())
    {
        int vv = q.front(); q.pop();
        for(int zz : ke[vv])
        {
            if(!check[zz]) {
                check[zz] = 1;
                v.push_back({vv,zz});
                q.push(zz);
            }
        }
    }
}

void treeDFS()
{
    FOR(i,1,n+1) check[i] = 0;
    v.clear();
    DFS(s);
    if(v.size() != n - 1) cout << "-1\n";
    else{

        for(auto it : v)
        {
            cout << it.fi << ' ' << it.se << "\n";
        }
    }
}

void solve()
{
    cin >> n >> m >> s;
    FOR(i,1,10005) ke[i].clear();
    FOR(i,1,m+1) 
    {
        int x, y; cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    treeDFS();
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
