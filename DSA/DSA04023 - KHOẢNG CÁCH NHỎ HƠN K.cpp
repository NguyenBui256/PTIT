#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, k;
ll a[200005];

void solve(){
    cin >> n >> k;
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n);
    ll ans = 0;
    for(int i = 0; i < n; i++) ans += lower_bound(a,a+n,a[i] + k) - a - i - 1;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}