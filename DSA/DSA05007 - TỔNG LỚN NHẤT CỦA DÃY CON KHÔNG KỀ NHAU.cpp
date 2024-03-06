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
ll dp[1000005];
void solve()
{
    memset(dp,0,sizeof(dp));
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    dp[0] = a[0];
    dp[1] = max(a[0],a[1]);
    FOR(i,2,n)
    {
        dp[i] = max(dp[i-1], dp[i-2] + a[i]);
    }
    cout << *max_element(dp,dp+n) << "\n";
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