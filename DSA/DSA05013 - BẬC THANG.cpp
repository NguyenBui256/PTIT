#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

void solve()
{
    int n, k; cin >> n >> k;
    int dp[100005] = {};
    dp[0] = 1; dp[1] = 1;
    ll sum = 1;
    for(int i = 2; i <= k; i++)
    {
        sum = (sum + dp[i-1]) % mod;
        dp[i] = sum;
        // cout << dp[i] << ' ';
    }
    for(int i = k + 1; i <= n; i++)
    {   
        sum = (sum - dp[i - k - 1] + dp[i-1] + mod) % mod; // sum - di co the bi < 0
        // cout << sum << "\n";
        dp[i] = sum;
    }
    cout << dp[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}