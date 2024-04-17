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

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void solve()
{
    int n,m; cin >> n >> m;
    int a[n+1][m+1];
    queue<pair<int,int>> q;
    map<pair<int,int>, int> mp;
    FOR(i,1,n+1) 
    {
        FOR(j,1,m+1) 
        {
            cin >> a[i][j];
            if(a[i][j] == 2) q.push({i,j});
        }
    }
    int ans = 0;
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        int i = it.fi, j = it.second;
        FOR(k,0,4)
        {
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1 && mp[{i1,j1}] == 0) 
            {
                a[i1][j1] = 2;
                mp[{i1,j1}] = mp[{i,j}] + 1;
                q.push({i1,j1});
            }
        }
    }
    int ok = 1;
    FOR(i,1,n+1) 
    {
        FOR(j,1,m+1) 
        {
            if(a[i][j] == 1) {
                ok = 0;
                break;
            }
            if(a[i][j] == 2) ans = max(ans,mp[{i,j}]);
        }
    }
    if(ok) cout << ans << "\n";
    else cout << "-1\n";
}

int main()
{
    int t = 1;
    TEST
    {
        solve();
    }
}