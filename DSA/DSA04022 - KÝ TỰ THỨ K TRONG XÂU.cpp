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
    if(k & 1) return 1;
    if(k == (ll)pow(2,n-1)) return n;
    else if(k < (ll)pow(2,n-1)) return Find(n-1, k);
    else return Find(n-1, k - (ll)pow(2,n-1));
}

void solve()
{
    cin >> n >> k;
    cout << (char)(Find(n,k) + 'A' - 1) << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    init();
    int t;
    cin >> t;
    while(t--) solve();
}