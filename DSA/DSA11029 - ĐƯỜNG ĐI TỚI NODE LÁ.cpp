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

vector<vi> ans;
int vst[1005];
vi ke[1005];
void DFS(int u, vector<int> path){
    if(ke[u].empty()){
        ans.pb(path);
    }
    vst[u] = 1;
    for(int v : ke[u]){
        if(!vst[v]){
            vi tmp = path;
            tmp.pb(v);
            DFS(v,tmp);
        }
    }
}

bool cmp(vi a, vi b){
    return a.back() < b.back();
}

void solve()
{
    ans.clear();
    memset(vst,0,sizeof(vst));
    FOR(i,1,1005) ke[i].clear();
    int n; cin >> n;
    int x, y;
    FOR(i,0,n - 1){
        cin >> x >> y;
        ke[x].pb(y);
    }
    DFS(1,{1});
    sort(begin(ans), end(ans), cmp);
    for(auto i : ans){
        for(int j : i) cout << j << ' ';
        cout << "\n";
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