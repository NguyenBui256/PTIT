#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
// int a[10005];
int ans = 0;

// void init(int n)
// {       
//     FOR(i,1,n+1) a[i] = 0;
// 


bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}



void solve()
{
    cin >> n >> m;
    int a[n], b[m];
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,m) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int l = 0, r = 0;
    while(l < n && r < m)
    {
        while(a[l] <= b[r] && l < n) 
        {
            cout << a[l] << ' ';
            l++;
        }
        while(b[r] < a[l] && r < m)
        {
            cout << b[r] << ' ';
            r++;
        }
    }
    while(l < n) 
    {
        cout << a[l] << ' ';
        l++;
    }
    while(r < m)
    {
        cout << b[r] << ' ';
        r++;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}