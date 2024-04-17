#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k;
int ok = 1;

void solve()
{
    ok = 1;
    cin >> n >> m;
    vector<vector<int>> ke(n+1);
    int x,y;
    FOR(i,0,m)
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    for(int i = 1; i <= n; i++) 
    {
        for(auto x : ke[i]) 
        {
            if(ke[i].size() != ke[x].size()) 
            {
                ok = 0;
                cout << "NO\n";
                break;
            }
        }
        if(!ok) break;
    }
    if(ok) cout << "YES\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}