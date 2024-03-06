#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m;
int a[1000][1000], check[1000][1000];

int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,0,-1,1,-1};


void loang(int i, int j)
{
    check[i][j] = 1;
    FOR(k,0,8)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1 && !check[i1][j1]) loang(i1,j1); 
    }
}

void solve()
{
    memset(check,0,sizeof(check));
    cin >> n >> m;
    FOR(i,0,n) 
    {
        FOR(j,0,m) cin >> a[i][j];
    }
    int ans = 0;
    FOR(i,0,n)
    {
        FOR(j,0,m) 
        {
            if(a[i][j] && !check[i][j])
            {
                ans++;
                loang(i,j);
            }
        }
    }
    cout << ans << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}