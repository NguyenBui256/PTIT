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
    int ans = 1e9;
    FOR(i,0,n-1) 
    {
        FOR(j,i+1,n) 
        {
            if(abs(a[j] + a[i]) < abs(ans)) 
            {
                ans = a[i] + a[j];
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