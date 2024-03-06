#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
int a[10005];
int ans = 0;

void solve()
{
    cin >> n >> k;
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n);
    FORD(i,n-1,n-1-k) cout << a[i] << ' ';
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}