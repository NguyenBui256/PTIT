#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// int a[10000005];
// int b[10000005];

int dp[1003][1003];

// void init()
// {
//     F[1] = 1; F[2] = 1;
//     FOR(i,3,93) 
//     {
//         F[i] = F[i-1] + F[i-2]; 
//     }
// }

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    FOR(i,1,n+1)
    {
        dp[i][i] = 1;
    }
    int ans = 1;
    FOR(len,2,n+1)
    {
        FOR(i,1,n-len+2)
        {
            int j = i + len - 1;
            if(len == 2) 
            {
                dp[i][j] = (s[i] == s[j]);
            }
            else
            {
                dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
            }
            if(dp[i][j]) ans = max(ans, len);
        }
    }
    cout << ans << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}