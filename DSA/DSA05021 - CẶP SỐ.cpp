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

ll MOD = 1e9 + 7;

int n;
ii a[1005];
int F[1005];

void solve()
{
    memset(F,0,sizeof(F));
    memset(a,0,sizeof(a));
    cin >> n;
    FOR(i,0,n) 
    {
        cin >> a[i].fi >> a[i].se;
        F[i] = 1;
    }
    sort(a,a+n);
    int ans = 0;
    FOR(i,0,n) 
    {
        FOR(j,0,i)
        {
            if(a[i].fi > a[j].se) 
            {
                F[i] = max(F[i], F[j] + 1);
            }
        }
        if(F[i] > ans) ans = F[i];
    }
    cout << ans << '\n';
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