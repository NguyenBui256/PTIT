#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

void solve()
{   
    int V, E; cin >> V >> E;
    vector<vector<int>> ke(V+1);
    while(E--)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    FOR(i,1,V+1) 
    {
        cout << i << ": ";
        for(int u : ke[i]) cout << u << ' ';
        cout << "\n"; 
    }
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}