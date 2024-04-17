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
int a[1005][1005];
int dem[1005], check[1005];

void solve()
{
    memset(a,0,sizeof(a));
    memset(dem,0,sizeof(dem));
    memset(check,0,sizeof(check));
    cin >> n >> m >> k;
    vector<int> v;
    v.clear();
    v.resize(n);
    int x,y;
    FOR(i,0,n) v[i] = i+1;
    FOR(i,0,m)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
        dem[x]++;
        dem[y]++;
    }
    sort(begin(v),end(v),[](int x, int y){
        return dem[x] > dem[y];
    });

    int ans = 0; //number of colors
    for(int i : v)
    {
        if(!check[i])
        {
            ans++;
            check[i] = 1;
            for(int j = 1; j <= n; j++)
            {
                if(!a[i][j]) check[j] = 1;
            }
        }
    }
    if(ans <= k) cout << "YES\n";
    else cout << "NO\n";
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

// Hinh vuong nho nhat: C[i][j] = min(C[i-1][j-1], min(C[i-1][j], C[i][j-1])) + 1;