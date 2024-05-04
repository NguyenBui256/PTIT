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

struct edge{
    int x,y,w;
};

int n, m, s;
int par[1005], sz[1005];
vector<edge> E;


void nhap()
{
    E.clear();
    memset(par,0,sizeof(par));
    memset(sz,0,sizeof(sz));
    cin >> n >> m;
    int x, y, w;
    FOR(i,0,m)
    {
        cin >> x >> y >> w;
        E.pb({x,y,w});
    }
}

void init()
{
    
    FOR(i,1,n+1)
    {
        par[i] = i;
        sz[i] = 1;
    }
}

int Find(int u)
{
    if(u == par[u]) return u;
    return par[u] = Find(par[u]);
}

bool Union(int u, int v)
{
    u = Find(u); 
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u,v);
    par[v] = u;
    sz[u] += sz[v];
    return true;
}

void Kruskal()
{
    vector<edge> MST;
    sort(all(E), [](edge a, edge b){
        return a.w < b.w;
    });
    int res = 0;
    for(edge e : E)
    {
        if(MST.size() == n - 1) break;
        if(Union(e.x,e.y)) 
        {
            res += e.w;
            MST.pb(e);
        }
    }
    cout << res << "\n";
}

void solve()
{
    nhap();
    init();
    Kruskal();
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
