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
    vector<int> le, chan;
    FOR(i,1,n+1)
    {
        cin >> a[i];
        if(i & 1) le.push_back(a[i]);
        else chan.push_back(a[i]);
    }
    sort(begin(le), end(le));
    sort(begin(chan), end(chan), greater<int>());
    for(int i = 0; i < n / 2; i++) 
    {
        cout << le[i] << ' ' << chan[i] << ' ';
    }
    if(n % 2 == 1) cout << le[n/2];
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    
}