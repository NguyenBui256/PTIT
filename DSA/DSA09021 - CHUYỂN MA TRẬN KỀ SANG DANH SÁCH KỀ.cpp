#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int V, E, u;
vector<vector<int>> ke(1005);
int a[1003][1003];
int check[1005];

void solve()
{   
    cin >> E;
    FOR(i,1,E+1)
    {
        FOR(j,1,E+1)
        {
            cin >> a[i][j];
            if(a[i][j] && i != j) ke[i].push_back(j);
        }
    }
    FOR(i,1,E+1) 
    {
        for(int u : ke[i]) cout << u << ' ';
        cout << "\n";
    }
}



int main() 
{
    int t = 1;
    // TEST
    {
        solve();
    }
}