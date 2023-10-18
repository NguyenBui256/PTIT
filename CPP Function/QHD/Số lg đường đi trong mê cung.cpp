#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
ll dp[1005][1005];
int mod = 1e9 + 7;

int main() {
    int n; cin >> n;
    char a[n+1][n+1];
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    } 
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            if(a[i][j] == '.')
            {
                dp[i][j] += (dp[i-1][j] % mod + dp[i][j-1] % mod) % mod;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n][n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
