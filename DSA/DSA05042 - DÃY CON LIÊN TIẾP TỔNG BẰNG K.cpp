#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll F[100005];
ll a[100005];
int n;
ll k;

void solve()
{
    memset(F,0,sizeof(F));
    // F[0] = 0;
    map<ll,int> mp;
    mp[0] = 1;
    cin >> n >> k;
    int ok = 0;
    FOR(i,1,n+1)
    {
        cin >> a[i];
        F[i] = F[i-1] + a[i];
        // cout << F[i] << ' ';
        if(mp[F[i] - k]) ok = 1;
        mp[F[i]] = 1;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
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