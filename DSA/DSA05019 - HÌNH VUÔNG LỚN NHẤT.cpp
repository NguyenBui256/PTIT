#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int F[1003][1003];
int a[1003][1003];
int n, m;

void solve()
{
    memset(a,0,sizeof(a));
    memset(F,0,sizeof(F));
    int ans = -1e9;
    cin >> n >> m;
    FOR(i,1,n+1) 
    {
        FOR(j,1,m+1) cin >> a[i][j];
    }
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            if(!a[i][j]) F[i][j] = 0;
            else 
            {
                F[i][j] = min(F[i-1][j-1], min(F[i-1][j],F[i][j-1])) + 1;
            }
            ans = max(ans, F[i][j]);
        }
    }
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}

// Hinh vuong nho nhat: C[i][j] = min(C[i-1][j-1], min(C[i-1][j], C[i][j-1])) + 1;