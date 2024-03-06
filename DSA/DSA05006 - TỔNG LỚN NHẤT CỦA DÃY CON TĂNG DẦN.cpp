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

int a[10005];
int dp[10005];

void solve()
{
    memset(dp,0,sizeof(dp));
    cin >> n;
    FOR(i,0,n) cin >> a[i], dp[i] = a[i];
    FOR(i,0,n)
    {
        FOR(j,0,i) 
        {
            if(a[i] > a[j]) dp[i] = max(dp[i],dp[j] + a[i]);
        }
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