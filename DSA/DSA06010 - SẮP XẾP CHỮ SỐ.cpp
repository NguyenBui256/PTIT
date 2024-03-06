#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

set<int> se;

void prc(int a) 
{
    while(a) 
    {
        se.insert(a%10);
        a /= 10;
    }
}


void solve()
{
    se.clear();
    int n; cin >> n;
    int x;
    FOR(i,0,n)
    {
        cin >> x;
        prc(x);
    }
    for(int x : se) cout << x << ' ';
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}