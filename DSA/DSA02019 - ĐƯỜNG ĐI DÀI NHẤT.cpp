#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, ans;
vector<int> ke[1005];
int check[1005][1005];
// int par[1005];
int ok = 0;

void DFS(int u, int k)
{
    ans = max(ans, k);
    for(int i = 1; i <= n; i++){
        if(check[u][i]){
            check[u][i] = check[i][u] = 0;
            DFS(i,k+1);
            check[u][i] = check[i][u] = 1;
        }
    }
}

void solve()
{
    memset(check,0,sizeof(check));
    ans = 0;
    cin >> n >> m;
    int x,y;
    FOR(i,0,m)
    {
        cin >> x >> y;
        x++; y++;
        check[x][y] = check[y][x] = 1;
    } 
    FOR(i,1,n+1) 
    {
        DFS(i,0);
    }
    cout << ans << "\n";
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