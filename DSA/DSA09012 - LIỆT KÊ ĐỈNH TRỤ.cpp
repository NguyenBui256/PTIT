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
int a[1003][1003];
int check[1005];
int tplt, cnt;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(int i = 1; i <= n; i++)
        {
            if(a[v][i] && !check[i]) 
            {
                check[i] = 1;
                q.push(i);
            }
        }
    }
}

void solve()
{   
    memset(check,0,sizeof(check));
    memset(a,0,sizeof(a));
    tplt = 0;
    cin >> n >> m;
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    FOR(i,1,n+1) 
    {
        if(!check[i]) 
        {
            tplt++;
            BFS(i);
        }
    }
    FOR(i,1,n+1)
    {   
        cnt = 0;
        memset(check,0,sizeof(check));
        check[i] = 1;
        FOR(j,1,n+1) 
        {
            if(!check[j])
            {
                cnt++;
                BFS(j);
            }
        }
        if(cnt > tplt) cout << i << ' ';
    }
    cout << "\n";
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