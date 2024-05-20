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
    int deg[1005] = {0}, deg1[1005] = {0};
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        deg[x]++; deg1[y]++;
    }
    int dem = 0, dem1 = 0;
    FOR(i,1,n+1)
    {
        if(deg[i] == deg1[i]) dem++;
        // else if(abs(deg[x] - deg1[x]) == 1) dem1++;
    }
    if(dem == n) cout << 1 << "\n"; // chu trinh euler
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