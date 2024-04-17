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

int dp[105][105]; //dp[i][j] là độ dài xâu con đối xứng dài nhất từ chỉ số i đến j

void solve()
{
    memset(dp,0,sizeof(dp));
    string s; cin >> s;
    int ans = 0;
    int n = s.size();
    for(int i = 0; i < n; i++) dp[i][i] = 1;
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = i; j < n; j++)
        {
            if(i == j){
                dp[i][j] = 1;
                continue;
            }
            if(s[i] == s[j]) dp[i][j] = dp[i+1][j-1] + 2;
            else dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        }
    }   
    cout << n - dp[0][n-1] << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}