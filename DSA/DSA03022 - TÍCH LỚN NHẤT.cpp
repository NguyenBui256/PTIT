#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, k, final = 0;
int a[20];

void init(int n)
{       
    FOR(i,1,n+1) a[i] = 0;
}

void sinh() 
{
    int i = n;
    while(a[i] == 1 && i >= 1)
    {
        a[i] = 0;
        i--;
    } 
    if(i == 0) final = 1;
    else a[i] = 1;
}

bool check(int a[])
{
    int yes = 0;
    FOR(i,1,n) 
    {
        int cnt = 0;
        while(a[i] == 0 && i <= n) 
        {
            cnt++;
            i++;
        }  
        if(cnt == k) yes++;
        else if(cnt > k) return false;
    }
    return yes == 1;
}

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.se != b.se) return a.se < b.se;
    return a.fi < b.fi;
}

ll rev(ll a) 
{
    ll ans = 0;
    while(a) 
    {
        ans = ans * 10 + a % 10;
        a /= 10;
    }
    return ans;
}

ll binpow(ll a, ll b)
{
    if(b == 1) return a;
    ll tmp = binpow(a, b / 2);
    if(b & 1) return ((tmp % MOD * tmp % MOD) % MOD * a % MOD) %MOD;
    return (tmp % MOD * tmp % MOD) % MOD;
}

void solve()
{
    int n; cin >> n;
    int a[n+1];
    int am = 0, duong = 0;
    FOR(i,0,n) 
    {
        cin >> a[i];
        if(a[i] > 0) duong++;
        else if(a[i] < 0) am++;
    }
    sort(a,a+n);
    if(duong >= 3) 
    {
        cout << max(a[n-1] * a[n-2] * a[n-3], a[0]*a[1]*a[n-1]);
    } 
    else if(duong >= 1)
    {
        cout << max(a[0] * a[1] * a[n-1], a[0]*a[1]);
    }
    else 
    {
        cout << max(max(a[n-1] * a[n-2], a[0] * a[1]), max(a[0] * a[1] * a[2], a[n-1]*a[n-2]*a[n-3]));
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    
}