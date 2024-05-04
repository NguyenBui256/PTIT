#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m, s;
vector<vector<int>> Mat;

void nhap()
{
    cin >> n >> m;
    Mat.resize(n+1, vector<int>(n+1,1e9));
    FOR(i,1,n+1) Mat[i][i] = 0;
    int x, y, w;
    FOR(i,0,m)
    {
        cin >> x >> y >> w;
        Mat[x][y] = w;
        Mat[y][x] = w;
    }
}

void floyd()
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
            }
        }
    }
    int q; cin >> q;
    while(q--){
        int x, y; cin >> x >> y;
        cout << Mat[x][y] << "\n";
    }
}
void solve()
{
    nhap();
    floyd();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // TEST
    {
        solve();
    }
}
