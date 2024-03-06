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
int check[1005];

void BFS(int u)
{
    check[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for(int z : ke[v]) 
        {
            if(!check[z]) 
            {
                q.push(z);
                check[z] = 1;
            }
        }
    }
}

void solve()
{   
    cin >> V >> E >> u;
    for(int i = 1; i <= V; ++i)
    {
        ke[i].clear();
        check[i] = 0;
    }
    int x, y; 
    while(E--)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
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