#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int n, m, k;
int a[1005];
int dp[1005];

void solve()
{
    int n, k;
        cin >> n >> k;
        int a[n];
        long long f[k + 1] = {}, mod = 1e9 + 7;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        f[0] = 1;
        for (int i = 1; i <= k; i++)
            for (int j = 0; j < n; j++)
                if (i >= a[j])
                    f[i] = (f[i] + f[i - a[j]]) % mod;
        cout << f[k] << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}