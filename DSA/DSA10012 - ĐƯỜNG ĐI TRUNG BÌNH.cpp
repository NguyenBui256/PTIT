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

int n, m;
vector<vector<int>> Mat;


void nhap()
{
    cin >> n >> m;
    Mat.clear();
    Mat.resize(n+1, vector<int>(n+1, 1e9)); 
    int x, y;
    FOR(i,1,n+1) Mat[i][i] = 0;
    FOR(i,0,m)
    {
        cin >> x >> y;
        Mat[x][y] = 1;
    }
}

void floyd()
{
    FOR(k,1,n+1)
    FOR(i,1,n+1)
    FOR(j,1,n+1)
        Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);

    double ans = 0;
    int cnt = 0;
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1) 
            if(Mat[i][j] != 1e9 && Mat[i][j] != 0){ 
            ans += Mat[i][j];
            cnt++;
        }
    }
    cout << fixed << setprecision(2) << 1.0*ans/cnt<< "\n";
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
    TEST
    {
        solve();
    }
}
