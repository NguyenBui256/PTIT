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
    memset(check,0,sizeof(check));
    FOR(i,1,n+1) ke[i].clear();
    cin >> n >> m;
    int x, y;
    while(m--)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }

    int q; cin >> q;
    while(q--)
    {
        cin >> x >> y;
        queue<int> q;
        q.push(x);
        int ok = 0, check[n+1] = {};
        while(!q.empty())
        {
            int k = q.front(); q.pop();
            if(k == y) 
            {
                ok = 1;
                break;
            }
            for(int z : ke[k]) 
            {
                if(!check[z])
                {
                    q.push(z);
                    check[z] = 1;
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}