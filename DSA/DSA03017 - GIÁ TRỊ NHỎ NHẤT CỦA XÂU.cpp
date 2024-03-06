#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k, s ,t;
vector<vector<int>> ke(1003);
// int ans[1003][1003];
int check[1003];

// void dfs(int root, int u)
// {
//     check[u] = 1;
//     for(int v : ke[u])
//     {
//         if(!check[v]) 
//         {
//             ans[root][v] = 1; ans[v][root] = 1;
//             dfs(root,v);
//         }
//     }
// }

void solve()
{
    cin >> k;
    string s; cin >> s;
    map<char,int> mp;
    priority_queue<int> q;
    FOR(i,0,s.size()) mp[s[i]]++;
    FOR(i,0,s.size())
    {
        if(mp[s[i]]) 
        {
            q.push(mp[s[i]]);
            mp[s[i]] = 0;
        }
    }   
    while(k--)
    {
        int tmp = q.top(); q.pop();
        q.push(tmp - 1);
    }
    ll ans = 0;
    while(!q.empty())
    {
        ans += q.top() * q.top();
        q.pop();
    }
    cout << ans << "\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}