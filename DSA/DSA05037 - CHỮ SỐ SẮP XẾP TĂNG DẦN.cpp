#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n;
vector<vi> dp(101, vi(101,0)); // dp[i][j] là số có i chữ số tận cùng bằng j
void init()
{
    FOR(i,0,10) dp[1][i] = 1;

    for(int i = 2; i <= 100; i++) // độ dài
    {
        for(int j = 0; j <= 9; j++) //chữ số
        {
            for(int k = 0; k <= j; k++) //ghép được chữ số j vào sau các số có (i-1) chữ số và tận cùng bằng k (k <= j)
            {
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
            }
        }
    }
}

void solve()
{
    cin >> n;
    int ans = 0;
    FOR(i,0,10)
    {
        ans = (ans % MOD + dp[n][i] % MOD) % MOD;
    }
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    init();
    int t = 1;
    TEST
    {
        solve();
    }
}