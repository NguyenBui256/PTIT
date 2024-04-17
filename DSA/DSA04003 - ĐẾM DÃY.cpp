#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int mod = 123456789;

ll dq(ll k, ll n)
{
    if(n == 0) return 1;
    ll tmp = dq(k,n/2);
    if(n % 2 == 0) return (tmp % mod * tmp % mod) % mod;
    return 2 * (tmp % mod * tmp % mod) % mod;
}

void solve()
{
    ll n; cin >> n;
    cout << dq(2,n-1) << "\n";
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