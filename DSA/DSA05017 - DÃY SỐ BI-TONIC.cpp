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

int a[1000005];
ll dp[1000005], dp2[1000005];

void solve()
{
    memset(dp,0,sizeof(dp));
    cin >> n;
    FOR(i,0,n) cin >> a[i], dp[i] = a[i], dp2[i] = a[i];
    FOR(i,1,n)
    {
        for(int j = 0; j < i; j++) if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
    }
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(a[i] > a[j]) dp2[i] = max(dp2[i], dp2[j] + a[i]);
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) 
    {
        // cout << dp[i] << ' ' << dp2[i] << "\n";
        ans = max(ans, dp[i] + dp2[i] - a[i]);
    }
    cout << ans << "\n";
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