#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k;
// int ans = 0;

vector<pair<int,int>> a;
vector<vector<int>> dp;

string ans = "";

void find(int n, int k)
{
    if(!n) return;
    if(dp[n][k] == dp[n-1][k]) find(n-1,k);
    else 
    {
        find(n-1, k - a[n].first);
        ans[n-1] = '1';
    }
}


 
void solve()
{
	cin >> n >> k;
    a.resize(n+1);
    dp.resize(n+1, vector<int>(k+1,0));
    FOR(i,1,n+1) cin >> a[i].second;
    FOR(i,1,n+1) 
    {
        ans += "0";
        cin >> a[i].first;
    }
    FOR(i,0,n+1) 
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            if(j < a[i].first) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i].first] + a[i].second);
        }
    }
    cout << dp[n][k] << "\n";
    find(n,k);
    for(auto i : ans) cout << i << ' ';
}



int main() 
{
    int T = 1;
    // cin >> T;
    while(T--)
    {
        solve();
    }
}