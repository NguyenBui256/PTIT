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

int n,m;
ll dp[100][100];

void solve()
{
    memset(dp,0,sizeof(dp));
    cin >> n >> m;
    dp[n][m] = 1;
    FORD(i,n,-1){
        FORD(j,m,-1){
            if(i - 1 >= 0) dp[i-1][j] += dp[i][j];
            if(j - 1 >= 0) dp[i][j-1] += dp[i][j];
        }
    }
    cout << dp[0][0] + dp[n][0] - 1 + dp[0][m] - 1 << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}