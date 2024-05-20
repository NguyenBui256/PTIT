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
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()
#define reset(a) memset(a,0,sizeof(a))

ll MOD = 1e9 + 7;

int n, m;
vector<vector<int>> ke;
int vst[1005];
map<ii,int> mp;

bool bfs(int u){
    queue<ii> q;
    q.push({u,0});
    vst[u] = 1;
    while(!q.empty()){
        ii tmp = q.front(); q.pop();
        for(int v : ke[tmp.fi]){
            if(!vst[v]){
                vst[v] = 1;
                q.push(tmp);
                q.push({v,tmp.se + mp[{tmp.fi,v}]});
            }
            else if(v == u && tmp.se + mp[{tmp.fi,v}] < 0) return true;
        }
    }
    return false;
}

void solve()
{
    cin >> n >> m;
    reset(vst);
    ke.clear();
    ke.resize(n+1);
    mp.clear();
    int x,y,w;
    while(m--){
        cin >> x >> y >> w;
        ke[x].pb(y);
        mp[{x,y}] = w;
    }
    FOR(i,1,n+1){
        reset(vst);
        if(bfs(i)){
            cout << "1\n";
            return;
        }
    }
    cout << "0\n";
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