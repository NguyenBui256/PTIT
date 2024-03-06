#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;

void solve()
{
    cin >> n;
    pair<int,int> a[n];
    FOR(i,0,n)
    {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a,a+n);
    int ans = -1, Min = a[0].se, k = a[0].fi;
    FOR(i,1,n) 
    {
        if(a[i].fi > k) 
        {
            ans = max(ans, a[i].se - Min);
        }
        if(a[i].se < Min) 
        {
            k = a[i].fi;
            Min = a[i].se;
        }
    }
    cout << ans << "\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}