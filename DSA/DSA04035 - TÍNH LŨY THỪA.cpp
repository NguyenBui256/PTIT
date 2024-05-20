#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
// int a[10000005];
// int b[10000005];

// struct matrix {
//     ll a[20][20];

//     friend matrix operator * (matrix x, matrix y)
//     {
//         matrix c;
//         FOR(i,0,n)
//         {
//             FOR(j,0,n)
//             {
//                 c.a[i][j] = 0;
//                 ll tmp = 0;
//                 FOR(k,0,n)
//                 {
//                     c.a[i][j] += (x.a[i][k] % MOD * y.a[k][j] % MOD) % MOD; 
//                     c.a[i][j] %= MOD;
//                 }
//             }
//         }
//         return c;
//     }
// };

// matrix lt(matrix a, ll b)
// {
//     if(b == 1) return a;
//     matrix tmp = lt(a, b/2);
//     if(b % 2 == 0) return tmp * tmp;
//     else return tmp * tmp * a;
// }

ll lt(ll x, ll y)
{
    if(y == 1) return x;
    ll tmp = lt(x, y / 2);
    if(y & 1) return (((tmp * tmp) % MOD) * x) % MOD;
    return (tmp * tmp) % MOD;
}


void solve()
{
    ll x, y;
    while(1)
    {
        cin >> x >> y;
        if(!x && !y) return;
        if(y == 0) 
        {
            cout << "1\n";
        }
        else cout << lt(x,y) << "\n";
    }
    
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t = 1;
    // cin >> t;
    while(t--) solve();
}