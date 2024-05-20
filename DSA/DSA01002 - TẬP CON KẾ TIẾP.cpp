#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k;
int a[1005];



void solve()
{
    cin >> n >> k;
    FOR(i,1,k+1) cin >> a[i];
    int i = k;
    while(a[i] == n - k + i && i >= 1) 
    {
        i--;
    }
    if(i != 0)
    {
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
        FOR(i,1,k+1) cout << a[i] << ' ';
        cout << "\n";
    }
    else
    {
        for(int i = 1; i <= k; i++) cout << i << ' ';
        cout << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}