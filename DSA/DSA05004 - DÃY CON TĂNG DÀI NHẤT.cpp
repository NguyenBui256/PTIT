#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
int a[10000005];
// int b[10000005];
int F[10005];

void solve()
{
    cin >> n;
    FOR(i,1,n+1) 
    {
        cin >> a[i];
        F[i] = 1;
    }
    int ans = 0;
    FOR(i,0,n) 
    {
        FOR(j,0,i)
        {
            if(a[i] > a[j]) 
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
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t = 1;
    // cin >> t;
    while(t--) solve();
}