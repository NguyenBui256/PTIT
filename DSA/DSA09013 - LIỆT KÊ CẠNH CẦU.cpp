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
vector<pair<int,int>> v;
int a[1003][1003];
int check[1005];
int tplt, cnt;

void DFS(int u)
{
    check[u] = 1;
    for(int i = 1; i <= V; i++) 
    {
        if(a[u][i] && !check[i]) DFS(i);
    }
}

void solve()
{   
    memset(a,0,sizeof(a));
    memset(check,0,sizeof(check));
    v.clear();
    tplt = 0;
    cin >> V >> E;
    int x, y;
    FOR(i,0,E)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
        v.push_back(make_pair(x,y));
    }
    FOR(i,1,V+1) 
    {
        if(!check[i]) 
        {
            tplt++;
            DFS(i);
        }
    }
    for(int i = 0; i < E; i++)
    {
        a[v[i].first][v[i].second] = 0;
        a[v[i].second][v[i].first] = 0;
        memset(check,0,sizeof(check));
        cnt = 0;
        for(int j = 1; j <= V; j++)
        {
            if(!check[j]) 
            {
                cnt++;
                DFS(j);
            }
        }
        // cout << cnt << "\n";
        if(cnt > tplt) cout << v[i].first << ' ' << v[i].second << ' ';
        a[v[i].first][v[i].second] = 1;
        a[v[i].second][v[i].first] = 1;
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