#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
int a[105][105];
int ans = 0;

// void init(int n)
// {       
//     FOR(i,1,n+1) a[i] = 0;
// }

void dq(int i, int j)
{
    if(i == n - 1 && j == m - 1) 
    {
        ans++;
    }
    if(i + 1 < n) 
    {
        a[i+1][j] = 0;
        dq(i+1,j);
        a[i+1][j] = 1;
    }
    if(j + 1 < m) 
    {
        a[i][j+1] = 0;
        dq(i,j+1);
        a[i][j+1] = 1;
    }
}


void solve()
{
    ans = 0;
    cin >> n >> m;
    FOR(i,0,n) 
    {
        FOR(j,0,m) cin >> a[i][j];
    }
    dq(0,0);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}