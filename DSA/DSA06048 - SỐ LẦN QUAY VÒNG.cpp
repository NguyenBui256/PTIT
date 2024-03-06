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
    ll ans = *min_element(a,a+n);
    int idx = 0;
    FOR(i,0,n) 
    {
        if(a[i] == ans) 
        {
            idx = i;
            break;
        }
    }
    cout << idx << "\n";
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}