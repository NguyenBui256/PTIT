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

void dfs(int u, vector<int> v)
{
    if(u == t)
    {
        ans.pb(v);
        return;
    } 
    check[u] = 1;
    for(int f : ke[u])
    {
        if(!check[f])
        {
            v.pb(f);
            dfs(f,v);
            v.pop_back();
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
    }
    vector<int> v;
    v.push_back(s);
    dfs(s,v); 
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