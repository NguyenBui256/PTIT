#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007
#define TEST int t;cin >> t;while(t--)
#define pb push_back
#define maxn 200005

ll n, k;
int a[maxn], t[4 * maxn];

//build
void build(int v, int l, int r) 
{
    if(l == r) t[v] = a[l];
    else
    {
        int m = (l + r) / 2;
        build(2 * v, l, m);
        build(2 * v + 1, m + 1, r);
        t[v] = t[2 * v] + t[2 * v + 1];
    }
}

//query: O(logN) a[l,r];
int sum(int v, int tl, int tr, int l, int r) 
{
    if(l > r) return 0;
    if(tl == l && tr == r) return t[v];
    else 
    {
        int tm = (tl + tr) / 2;
        return sum(2*v,tl,tm,l,min(r,tm)) + sum(2*v+1,tm+1,tr,max(l,tm+1),r);
    }
}

//update: O(logN) a[pos] = value
void update(int v, int l, int r, int pos, int value) 
{
    if(l == r) t[v] = value;
    else
    {
        int m = (l + r) / 2;
        if(pos <= m) update(2 * v, l, m, pos, value);
        else update(2 * v + 1, m + 1, r, pos, value);
        t[v] = t[2 * v] + t[2 * v + 1];
    }
}

void solve()
{
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    build(1,0,n-1);
    // FOR(i,1,4*n) cout << t[i] << ' '; 

    cout << sum(1,0,n-1,l,r);
} 


int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}