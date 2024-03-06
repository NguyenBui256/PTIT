#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
ll a[100005];

void solve()
{
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    int ans = 0;
    FOR(j,0,n) 
    {
        int i = j;
        int cnt = 1;
        while(i < n - 1 && a[i] < a[i+1]) 
        {
            i++;
            cnt++;
            // cout << a[i] << ' ' << cnt << "\n";
        }
        while(i < n - 1 && a[i] > a[i+1]) 
        {
            i++;
            cnt++;
            // cout << a[i] << ' ' << cnt << "\n";
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}