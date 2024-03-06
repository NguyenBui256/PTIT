#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int n, m, k;

void solve()
{
    queue<pair<int,ll>> q;
    cin >> n;
    int x, y, z; cin >> x >> y >> z;
    int a[n+2] = {};
    a[1] = x;
    a[2] = a[1] + min(x,z);
    FOR(i,3,n+2) // duyet den ca n + 1
    {
        a[i] = a[i-1] + x;
        if(i % 2 == 0) a[i] = min(a[i], a[i/2] + z);
        a[i - 1] = min(a[i-1], a[i] + y); 
    }
    cout << a[n] << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}