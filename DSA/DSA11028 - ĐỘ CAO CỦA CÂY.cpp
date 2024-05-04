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

int ans = 0;
int vst[100005];
vi ke[100005];
void DFS(int u, int cnt){
    vst[u] = 1;
    ans = max(ans,cnt);
    for(int v : ke[u]){
        if(!vst[v]){
            DFS(v,cnt+1);
        }
    }
}

void solve()
{
    FOR(i,1,100005) ke[i].clear();
    memset(vst,0,sizeof(vst));
    ans = 0;
    int n; cin >> n;
    int x, y;
    FOR(i,0,n - 1){
        cin >> x >> y;
        ke[x].pb(y);
    }
    DFS(1,0);
    cout << ans << "\n";
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