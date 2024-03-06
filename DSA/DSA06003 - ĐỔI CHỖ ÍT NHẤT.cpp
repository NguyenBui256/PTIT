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
    int ans = 0;
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n-1) 
    {
        k = i;
        FOR(j,i+1,n) 
        {
            if(a[j] < a[k]) k = j;
        }
        if(k != i) 
        {
            ans++;
            swap(a[k],a[i]);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}