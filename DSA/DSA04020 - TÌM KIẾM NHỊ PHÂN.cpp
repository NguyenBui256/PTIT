#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
ll a[1000005];

void solve()
{
    cin >> n >> k;
    FOR(i,0,n) cin >> a[i];
    int l = 0, r = n - 1, m;
    while(l <= r)
    {
        m = (l + r) / 2;
        if(a[m] < k) 
        {
            l = m + 1;
        }
        else if(a[m] > k) 
        {
            r = m - 1;
        }
        else
        {
            cout << m + 1 << "\n";
            return;
        }
    }
    cout << "NO\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}