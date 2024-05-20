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

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

void solve()
{
    cin >> n >> m; 
    string INF(100,'9');
    vector<vector<string>> dp(n+1, vector<string>(m+1,INF));
    dp[0][0] = "0";
    FOR(i,1,n+1){
        FOR(j,1,m+1)
        {
            for (int k = 1; k <= sqrt(min(i * i, min(j, 81))); k++){
                if(dp[i-k][j - k * k] != INF){
                    string tmp = ((dp[i-k][j-k*k] == "0") ? "" : dp[i-k][j-k*k]) + to_string(k);
                    sort(all(tmp));
                    if(cmp(tmp,dp[i][j])) dp[i][j] = tmp;
                }
            }
        }
    }
    if(dp[n][m] != INF) cout << dp[n][m];
    else cout << "-1";
    cout << "\n";
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