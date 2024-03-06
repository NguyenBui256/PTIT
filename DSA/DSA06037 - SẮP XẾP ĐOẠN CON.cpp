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
int a[100005];

void solve()
{
    cin >> n;
    int Max = -1e9;
    int b[n+1] = {}, c[n+1];
    int ans = 0;
    vector<int> v;
    FOR(i,0,n) 
    {
        cin >> a[i];
        if(a[i] > Max) Max = a[i];
        b[i] = Max;
    }
    int Min = 1e9;
    FORD(i,n-1,-1)
    {
        if(Min > a[i]) Min = a[i];
        c[i] = Min;
    }
    FOR(i,0,n-1)
    {
        if(b[i] <= c[i+1]) 
        {
            ans++;
            v.push_back(i);
        }   
    }
    cout << ans << "\n";
    if(ans)
    {
        for(int x : v) cout << x + 1 << ' ';
    }
    cout << '\n';
    
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    TEST
    solve();
}