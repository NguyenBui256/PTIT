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
    cin >> n >> k;
    map<ll,ll> mp;
    FOR(i,1,n+1)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    FOR(i,1,n+1)
    {
        if(mp[a[i]] && mp[k - a[i]]) 
        {
            if(a[i] != k - a[i])
            {
                ans += mp[a[i]] * mp[k - a[i]];
                mp[a[i]] = 0;
                mp[k - a[i]] = 0;
            }
            else
            {
                ans += mp[a[i]] * (mp[a[i]] - 1) / 2;
                mp[a[i]] = 0; 
            }
        }
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