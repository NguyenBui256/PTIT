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



void solve()
{
    int n,m; cin >> n >> m;
    vector<int> ke[1005];
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    int dem = 0, dem1 = 0;
    FOR(i,1,n+1) 
    {
        if(ke[i].size() && ke[i].size() % 2 == 0) dem++;
        else if(ke[i].size() && ke[i].size() & 1) dem1++;
    }
    if(dem == n) cout << 2 << "\n"; // chu trinh euler
    else if(dem1 == 2) cout << "1" << "\n"; // duong di euler
    else cout << "0" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
    {
        solve();
    }
}