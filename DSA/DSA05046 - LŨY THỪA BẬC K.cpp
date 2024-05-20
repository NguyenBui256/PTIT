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
ll C[1005][1005];

void init()
{
    FOR(i, 0, 1004)
    FOR(j, 0, i + 1)
    {
        if (j == 0 || i == j)
            C[i][j] = 1;
        else
            C[i][j] = C[i - 1][j] % MOD + C[i - 1][j - 1] % MOD;
        C[i][j] %= MOD;
    }
}

ll mod(ll a, ll b){
    return ((a % MOD) * (b % MOD)) % MOD;
}

ll bpow(ll n, ll k){
    if(k == 1) return n % MOD;
    ll tmp = bpow(n,k/2) % MOD;
    if(k&1) return mod(mod(tmp,tmp),n);
    return mod(tmp,tmp);
}

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> dp(k+1,0);
    dp[0] = n % MOD;
    n %= MOD;
    FOR(i,1,k+1){
        dp[i] = (bpow((n+1) % MOD, i + 1) - 1 + MOD) % MOD;
        FOR(j, 0, i)
        dp[i] = (dp[i] - mod(C[i + 1][i - j + 1], dp[j]) + MOD) % MOD;
        dp[i] = mod(dp[i], bpow(i + 1, MOD - 2));
    } 
    cout << dp[k] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    int t = 1;
    TEST
    {
        solve();
    }
}