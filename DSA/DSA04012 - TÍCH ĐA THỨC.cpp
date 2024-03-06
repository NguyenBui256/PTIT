#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007
#define TEST int t;cin >> t;while(t--)

ll n, m, k, final = 0;
// int a[10000005];
// int b[10000005];

// struct matrix {
//     ll a[15][15];

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


void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n+1], b[m+1];
    FOR(i,0,n)
    {
        cin >> a[i]; 
    }
    FOR(i,0,m) 
    {
        cin >> b[i];
    }
    map<int,int> mp;
    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            mp[i + j] += a[i] * b[j];
        }
    }
    for(auto it : mp)
    {
        cout << it.second << ' ';
    }
    cout << "\n";
} 

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    TEST
    solve();
}