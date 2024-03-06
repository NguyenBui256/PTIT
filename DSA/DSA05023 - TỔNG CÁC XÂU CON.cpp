#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k,t;

void solve()
{
    string s; cin >> s;
    int n = s.size();
    ll ans = 0;
    ll sum = 0;
    FOR(i,0,n)
    {
        ans = ans * 10;
        ans += (s[i] - '0') * (i + 1);
        sum += ans;
    }
    cout << sum << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    // TEST   
        
}