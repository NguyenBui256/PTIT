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
    cin >> n;
    ll F[n+1] = {};
    F[0] = 1;
    F[1] = 1;
    F[2] = 2;
    FOR(i,3,n+1) 
    {
        F[i] = F[i-1] + F[i-2] + F[i-3];
    } 
    cout << F[n] << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}