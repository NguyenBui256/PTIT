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

int n, sum = 0, ans = 1e9;
int check[15];
vs v(15);
int trace[15];

int cnt(string a, string b)
{
    int dp[300] = {}, dem = 0;
    for (char i : a)
        dp[i]++;
    for (char i : b)
        dem += dp[i];
    return dem;
}
void dq(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            int k = cnt(v[trace[i-1]], v[j]);
            trace[i] = j;
            check[j] = 1;
            sum += k;
            if(i == n)
            {
                ans = min(ans, sum);
            }
            else if(i < n && sum < ans) dq(i+1);
            check[j] = 0;
            sum -= k;
        }
    }
}



void solve()
{
    ans = 1e9;
    cin >> n;
    FOR(i,1,n+1) 
    {
        cin >> v[i];
    }
    dq(1);
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // init();
    int t = 1;
    // TEST
    {
        solve();
    }
}