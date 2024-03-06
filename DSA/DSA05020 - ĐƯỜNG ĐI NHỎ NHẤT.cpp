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

int a[1003][1003];
ll dp[1003][1003];

void solve()
{
    memset(dp,0,sizeof(dp));
    cin >> n >> m;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            cin >> a[i][j];
            dp[i][j] = a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    FOR(i,2,m+1) dp[1][i] = dp[1][i-1] + a[1][i];
    FOR(i,2,n+1) dp[i][1] = dp[i-1][1] + a[i][1];  
    FOR(i,2,n+1) 
    {
        FOR(j,2,m+1) 
        {
            dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1])) + a[i][j];
            // cout << dp[i][j] << ' ';
        }
        // cout << "\n";
    }
    cout << dp[n][m] << "\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    // TEST   
        
}