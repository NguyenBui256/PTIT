#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int n, m, s, t;
int ans = 1e9;

vector<pair<int,int>> ke[1000005]; // {trong so, dinh};

// int prev[1000005];

void nhap()
{
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        ke[x].push_back({w,y});
        ke[y].push_back({w,x});
    }
}

void Dijkstra(int s, int t)
{
    vector<ll> d(n+1, 1e9);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    // luu {khoang cach, dinh}
    // prev[s] = s;
    d[s] = 0;
    Q.push({0,s});
    while(!Q.empty())
    {
        auto it = Q.top(); Q.pop();
        int u = it.second;
        int kc = it.first;
        if(kc > d[u]) continue; // da duoc su dung (giong ben Prim)

        for(auto v : ke[u])
        {
            if(d[v.second] > v.first)
            {
                d[v.second] = v.first;
                Q.push({d[v.second], v.second});
                // prev[v.second] = u;
            }
        }
    }
    // cout << d[t] << "\n";
    // vector<int> path;
    // while(1)
    // {
    //     path.push_back(t);
    //     if(t == s) break;
    //     t = prev[t];
    // }
    // reverse(path.begin(), path.end());
    // for(int x : path)
    // {
    //     cout << x << ' ';
    // }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    Dijkstra(s, t);
    for(auto x : ke[t])
    {
        ans = min(ans, d[x.second]);
    }
    cout << ans;
}