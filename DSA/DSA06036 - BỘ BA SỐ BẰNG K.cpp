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
    FOR(i,0,n)
    {
        cin >> a[i];
    }
    int ok = 0;
    sort(a,a+n);
    FOR(i,0, n - 2) 
    {
        FOR(j,i+1,n-1)
        {
            ll tmp = a[i] + a[j];
            int idx = lower_bound(a+j+1,a+n,k-tmp) - a;
            if(a[idx] == (k - tmp))
            {
                ok = 1;
                break;
            }
        }
        if(ok) break;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}