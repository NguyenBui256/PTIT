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
vector<vector<int>> ke(1005);
int a[1003][1003];
int check[1005];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << ' ';
        for(int x : ke[v]) 
        {
            if(!check[x])
            {
                q.push(x);
                check[x] = 1;
            }
        }
    }
}

void solve()
{   
    memset(check,0,sizeof(check));
    cin >> V >> E >> u;
    for(int i = 1; i <= V; i++) ke[i].clear();
    while(E--)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    BFS(u);
    cout << "\n";
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}