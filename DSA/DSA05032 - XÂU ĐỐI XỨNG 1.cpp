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
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

ll MOD = 1e9 + 7;

int n,m;
int dp[50][50];

void solve()
{
    string s; cin >> s;
    string s1 = s;
    reverse(all(s1));
    n = s.size();
    s = " " + s;
    s1 = " " + s1;
    int ans = 0;
    memset(dp,0,sizeof(dp));
    FOR(i,1,n+1){
        FOR(j,1,n+1){
            if(s[i] == s1[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

    }
    cout << n - dp[n][n] << "\n";
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