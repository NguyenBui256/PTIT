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

int n, k;

void solve()
{
    cin >> n >> k;
    int dp[n+1][k]; //dãy con độ dài i có số dư khi chia cho k bằng j
    memset(dp,0,sizeof(dp));
    FOR(i,1,k) dp[0][i] = -1e9;

    int x;
    FOR(i,1,n+1){
        cin >> x;
        x %= k;
        FOR(j,0,k){
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - x) % k] + 1);
        }
    }
    cout << dp[n][0] << "\n";
    
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