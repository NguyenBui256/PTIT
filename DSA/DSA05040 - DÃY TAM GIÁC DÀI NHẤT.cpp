#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n;
int a[2000005];

void solve()
{   
    cin >> n;
    int dp[n+1] = {}, dp2[n+1] = {};
    FOR(i,0,n) cin >> a[i], dp[i] = 1, dp2[i] = 1;
    FOR(i,1,n) 
    {
        if(a[i] > a[i-1]) dp[i] = max(dp[i],dp[i-1] + 1);
    }
    FORD(i,n-2,-1)
    {
        if(a[i] > a[i+1]) dp2[i] = max(dp2[i], dp2[i+1] + 1);
    }
    int ans = 0;
    FOR(i,0,n) 
    {
        // cout << dp[i] << ' ' << dp2[i] << "\n";
        ans = max(ans, dp[i] + dp2[i] - 1);
    }
    cout << ans << "\n";
}






int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}