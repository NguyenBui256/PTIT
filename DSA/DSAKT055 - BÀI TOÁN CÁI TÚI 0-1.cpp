#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// int a[100005];
// int b[10000005];

void solve()
{
    cin >> n >> m;
    int F[n+1][m+1];
    memset(F,0,sizeof(F));
    int w[n+1], v[n+1];
    FOR(i,1,n+1) cin >> w[i];
    FOR(i,1,n+1) cin >> v[i];
    FOR(i,1,n+1)
    {
        FOR(j,0,m+1)
        {
            F[i][j] = F[i-1][j];
            if(j >= w[i]) 
            {
                F[i][j] = max(F[i][j], F[i-1][j-w[i]]+v[i]);
            }
        }
    }
    cout << F[n][m] << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}