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
    cin >> n;
    FOR(i,1,n+1) cin >> a[i];
    int i = n - 1;
    while(a[i] > a[i+1] && i >= 1) 
    {
        i--;
    }
    if(i != 0)
    {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        FOR(i,1,n+1) cout << a[i] << ' ';
        cout << "\n";
    }
    else
    {
        for(int i = 1; i <= n; i++) cout << i << ' ';
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