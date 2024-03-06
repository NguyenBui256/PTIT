#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll n, m;
ll a[10000];
int ans = 1e9;


void ql(int i, ll sum, int cnt)
{
    for(int j = i + 1; j < n; j++)
    {
        sum += a[j];
        cnt++;
        if(sum == m)
        {
            ans = min(ans,cnt);
        }
        else if(sum + a[n-1] <= m) ql(j,sum,cnt);
        sum -= a[j];
        cnt--;
    }
}

void solve()
{
    cin >> n >> m;
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n,greater<int>());
    ql(-1,0,0);
    if(ans != 1e9) cout << ans << "\n";
    else cout << "-1";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // TEST   
        solve();
}