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
int ok;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(int i = 1; i <= V; i++) 
        {
            if(a[v][i] == 1 && !check[i]) 
            {
                q.push(i);
                check[i] = 1;
            }
        }
    }
}

void solve()
{   
    memset(a,0,sizeof(a));
    memset(check,0,sizeof(check));
    cin >> V >> E;
    int x, y;
    FOR(i,0,E)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
    ok = 1;
    BFS(1);
    FOR(i,2,V+1)
    {
        if(!check[i])
        {
            ok = 0;
            break;
        }
    }
    if(!ok) cout << "NO\n";
    else cout << "YES\n";
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