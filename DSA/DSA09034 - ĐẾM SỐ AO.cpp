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

int n, m;
char a[1005][1005], check[1005][1005];

int dx[8] = {0,0,1,1,1,-1,-1,-1};
int dy[8] = {1,-1,0,1,-1,0,1,-1};

void dfs(int i, int j)
{
    // cout << i << ' ' << j << "\n";
    a[i][j] = 'x';
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k]; int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'W') dfs(i1,j1);
    }
}

void solve()
{
    cin >> n >> m;
    FOR(i,1,n+1) 
    {
        FOR(j,1,m+1) cin >> a[i][j];
    }
    int ans = 0;
    FOR(i,1,n+1) 
    {
        FOR(j,1,m+1)
        {
            if(a[i][j] == 'W') 
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // TEST
    {
        solve();
    }
}
