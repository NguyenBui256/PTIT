#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll MOD = 1e9 + 7;

int n, k, dp[105][50005]; //dp[i][j] là số số có i chữ số và tổng các chữ số bằng j

void init(){
    memset(dp,0,sizeof(dp));
    FOR(i, 1, 10) dp[1][i] = 1;
    FOR(i, 1, 101)
    {
        FOR(j, 0, 10)
        {
            FOR(k, j, 50001)
            {
                dp[i][k] = (dp[i][k] + dp[i - 1][k - j] % MOD) % MOD;
            }
        }
    }
}

void solve(){
    cin >> n >> k; 
    cout << dp[n][k] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    int t = 1;
    TEST
    {
        solve();
    }
}