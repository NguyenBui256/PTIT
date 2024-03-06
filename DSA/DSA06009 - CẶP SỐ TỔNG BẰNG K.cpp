#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

void solve()
{
    int n, k; cin >> n >> k;
    int a[n];
    map<int,int> mp;
    FOR(i,0,n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    FOR(i,0,n) 
    {
        if(mp[k - a[i]])
        {
            if(k - a[i] != a[i])
            {
                ans += mp[k - a[i]] * mp[a[i]];
                mp[k - a[i]] = 0;
                mp[a[i]] = 0;
            }
            else
            {
                ans += mp[a[i]] * (mp[a[i]] - 1) / 2;
                mp[a[i]] = 0;
            }
        }
    }
    cout <<  ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}