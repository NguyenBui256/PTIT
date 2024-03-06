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

bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b)
{
    if(a.fi.se != b.fi.se) return a.fi.se < b.fi.se;
    return a.se < b.se;
}

void solve()
{
    int x;
    cin >> n >> x;
    pair<pair<int,int>,int> a[n+1];
    FOR(i,0,n) 
    {
        cin >> a[i].fi.fi;
        a[i].fi.se = abs(a[i].fi.fi - x);
        a[i].se = i;
    }
    sort(a,a+n,cmp);
    FOR(i,0,n) cout << a[i].fi.fi << ' ';
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}