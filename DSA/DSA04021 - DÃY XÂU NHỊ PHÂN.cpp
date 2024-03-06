#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// int a[10000005];
// int b[10000005];

ll F[100];

void init()
{
    F[1] = 1; F[2] = 1;
    FOR(i,3,93) 
    {
        F[i] = F[i-1] + F[i-2]; 
    }
}


int Find(ll n, ll k)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k <= F[n-2]) return Find(n-2,k);
    else return Find(n-1,k-F[n-2]);
}

void solve()
{
    cin >> n >> k;
    cout << Find(n,k) << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    init();
    int t;
    cin >> t;
    while(t--) solve();
}