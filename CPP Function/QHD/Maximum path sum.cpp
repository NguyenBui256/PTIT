#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
ll dp[1005][1005];

int main() {
    int n, m; cin >> n >> m; int a[n+1][m+1];
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= m; j++) 
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= m; j++) 
        {
            if(i == 1) 
            {
                dp[i][j] = dp[i][j-1] + a[i][j];
            }
            else if(j == 1) 
            {
                dp[i][j] = dp[i-1][j] + a[i][j];
            }
            else
            {
                dp[i][j] = max(max(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]) + a[i][j];
            }
        }
    }
    cout << dp[n][m];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
