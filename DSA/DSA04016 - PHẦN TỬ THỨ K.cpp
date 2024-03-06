#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
// int a[10000005];
// int b[10000005];


void solve()
{
    cin >> n >> m >> k;
    int a[n+1], b[n+1];
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,m) cin >> b[i];
    int l = 0, r = 0, cnt = 0;
    while(l < n && r < m)
    {
        while(a[l] <= b[r]) 
        {
            cnt++;
            if(cnt == k) 
            {
                cout << a[l] << "\n";
                return;
            }
            l++;
        }
        while(a[l] > b[r]) 
        {
            cnt++;
            if(cnt == k) 
            {
                cout << b[r] << "\n";
                return;
            }
            r++;
        }
    }
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}