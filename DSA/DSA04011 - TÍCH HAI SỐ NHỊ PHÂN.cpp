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


void solve()
{
    string a, b; cin >> a >> b;
    ll x = 0, y = 0;
    ll d = 1;
    int n = a.size(), m = b.size();
    FORD(i,n-1,-1)
    {
        x += (a[i] - '0') * d;
        d *= 2;
    }
    d = 1;
    FORD(i,m-1,-1)
    {
        y += (b[i] - '0') * d;
        d *= 2;
    }
    cout << 1ll * x * y << "\n";
} 

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    TEST
    solve();
}