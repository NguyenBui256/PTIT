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
    int a[n], b[n];
    FOR(i,0,n)
    {
         cin >> a[i];
         b[i] = a[i];
    }
    sort(a,a+n);
    int l, r;
    for(int i = 0; i < n; i++) 
    {
        if(a[i] != b[i]) 
        {
            l = i + 1;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--) 
    {
        if(a[i] != b[i]) 
        {
            r = i + 1;
            break;
        }
    }
    cout << l << ' ' << r << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}