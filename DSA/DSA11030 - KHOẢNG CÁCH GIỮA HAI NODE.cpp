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

int n, kt = 0, ans = 0, u , v;
int vst[1005];
vi ke[1005];

void DFS(int u, int dis)
{
    if (kt)
        return;
    vst[u] = 1;

    if (u == v)
    {
        ans = dis;
        kt = 1;
        return;
    }

    for (int x : ke[u])
        if (!vst[x])
            DFS(x, dis + 1);
}

void solve()
{
    cin >> n;
    ans = 0;
    FOR(i, 1, 1005)
    ke[i].clear();
    n--;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        ans = 0;
        kt = 0;
        memset(vst,0,sizeof(vst));
        cin >> u >> v;

        DFS(u, 0);
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}