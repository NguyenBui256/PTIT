#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, k, s ,t;
vector<vector<int>> ke(1003);
vector<vector<int>> ans;
int check[1005];

void bfs(int u, vector<int> v)
{
    queue<pair<int,vector<int>>> q;
    v.push_back(u);
    q.push(make_pair(u,v));
    check[u] = 1;
    while(!q.empty())
    {
        pair<int,vector<int>> k = q.front();
        q.pop();
        if(k.first == t) 
        {
            ans.pb(k.second);
        }
        for(int z : ke[k.first]) 
        {
            if(!check[z]) 
            {
                k.second.push_back(z);
                q.push(make_pair(z,k.second));
                check[z] = 1;
                k.second.pop_back();
            }
        }
    }
}

void solve()
{
    ans.clear();
    for(int i = 1; i <= n; i++) ke[i].clear();
    memset(check,0,sizeof(check));
    cin >> n >> k >> s >> t;
    int x,y;
    while(k--)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    vector<int> v;
    // v.push_back(s);
    bfs(s,v); 
    // cout << ans.size() << "\n";
    if(ans.size())
    {
        sort(ans.begin(), ans.end());
        for(int z : ans[0]) cout << z << ' ';
        cout << '\n';
    }
    else cout << "-1\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}