#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[1005];

void init(int k)
{
    FOR(i,1,k+1) a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n - k + i && i >= 1) 
    {
        i--;
    }
    if(i == 0) final = 1;
    else 
    {
        a[i]++;
        FOR(j,i+1,k+1) a[j] = a[j-1] + 1;
    }
}

// void ql(int i, int a[])
// {
//     if(i == n+1) return;
//     int b[n-i+2];
//     string ans = "[";
//     for(int j = 1; j <= n - i + 1; j++) 
//     {
//         b[j] = a[j] + a[j+1];
//         ans += to_string(b[j]);
//         if(j != n - i + 1) ans += " ";
//     }
//     ans += "]";
//     v.push_back(ans);
//     ql(i+1,b);
// }

void solve()
{
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n);
    int l = 0, r = n - 1;
    while(l <= r) 
    {
        if(l != r) cout << a[r] << ' ' << a[l] << ' ';
        else if(l == r) cout << a[l];
        l++;
        r--;
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