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

int n, m;

bool sosanh(int a, int b, int c, int d){
    return abs((double)a / b - (double)c / d) < 0.000000001; 
}

void solve()
{
    cin >> n >> m;
    int a[n];
    int b[m];
    int dp[n][m] = {};
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,m) cin >> b[i];
    FOR(i,0,n) dp[i][0] = 1;
    FOR(j,0,m) dp[0][j] = 1;
    int Max = 1;
    FOR(i,1,n)
    {
        FOR(j,1,m){
            if(sosanh(a[i],b[j],a[i-1],b[j-1])) 
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = 1;
        }
    }
    FOR(i,0,n){
        FOR(j,0,m) Max = max(Max, dp[i][j]);
    }
    cout << Max << "\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}
