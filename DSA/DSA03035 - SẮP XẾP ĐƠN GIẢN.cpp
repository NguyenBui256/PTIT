#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007
#define TEST int t;cin >> t;while(t--)

ll n, m, k, final = 0;
int a[10000005];

void solve()
{
    cin >> n;
    int ans = 0;
    FOR(i,0,n) cin >> a[i];
    int f[n+1] = {};
    FOR(i,0,n)
    {
        f[a[i]] = f[a[i] - 1] + 1;
        ans = max(ans, f[a[i]]);
    }
    cout << n - ans << "\n";
} 

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}