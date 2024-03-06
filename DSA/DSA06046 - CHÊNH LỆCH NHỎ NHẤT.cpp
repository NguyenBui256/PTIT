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

// int C[1005][1005];

// void init() 
// {
//     C[0][0] = 1;
//     C[1][0] = 1;
//     FOR(i,1,1001) 
//     {
//         FOR(j,0,i+1) 
//         {
//             C[i][j] = (C[i-1][j] % MOD + C[i-1][j-1] % MOD) % MOD;
//         }
//     }
// }

void solve()
{
    cin >> n;
    int ans = 1e9;
    FOR(i,1,n+1)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    FOR(i,1,n)
    {
        if(abs(a[i] - a[i+1]) < ans) ans = abs(a[i] - a[i+1]);
    }
    cout << ans << '\n';
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}