#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n;
int a[1000005];
ll dp[1000005];
 
void solve()
{
	cin >> n;
    FOR(i,0,n) cin >> a[i];
    dp[0] = a[0];
    dp[1] = max(a[1],a[0]);
    ll ans = 0;
    FOR(i,2,n) 
    {
        dp[i] = max(a[i] + dp[i-2], dp[i-1]);
        ans = max(ans,dp[i]);
    }
    cout << ans << "\n";
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}