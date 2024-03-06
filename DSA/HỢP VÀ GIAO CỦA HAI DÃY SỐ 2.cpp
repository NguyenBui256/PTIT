#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> se;
    map<int,int> mp;
    FOR(i,0,n) 
    {
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]]++;
    }
    vector<int> v;
    FOR(i,0,m)
    {
        cin >> b[i];
        se.insert(b[i]);
        if(mp[b[i]]) v.push_back(b[i]);
    }
    for(int x : se) cout << x << ' ';
    cout << "\n";
    for(int x : v) cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}