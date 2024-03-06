#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

void solve()
{
    int n; cin >> n;
    int a[n];
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n);
    for(int x : a) cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}