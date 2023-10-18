#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
using ll = long long;
using fi = first;
using se = second;
using ii = pair<int,int>;

// Link lý thuyết: https://www.youtube.com/watch?v=cplfcGZmX7I (Prim's Algorithm);

vector<ii> ke[10005]; // mang luu {canh ke, cost};

int n, m;
int dis[10005]; //d[u] lưu khoảng cách từ đỉnh đang xét (s) đến đỉnh u;

int prim(int s)
{
    int ans = 0;
    priority_queue<ii, vector<ii>, greater<ii>> q; // queue sắp xếp cạnh nào có trọng số nhỏ nhất
    // pair dạng (dis[u],u);
    dis[s] = 0;
    q.push({s,0});
    for(int i = 1; i <= n; i++) d[i] = 1e9; // khởi tạo = INF;
    while(!q.empty())
    {
        ii tmp = q.top(); q.pop();
        int k = tmp.fi, u = tmp.se;
        if(k != dis[u]) continue; // đã sử dụng;

        ans += dis[u]; // kết nạp cạnh này vào MST;
        dis[u] = -1e9;

        // cập nhật khoảng cách cho các cạnh kề với u
        for(auto &v : ke[u])
        {
            if(dis[v.fi] > v.se)
            {
                 dis[v.fi] = v.se;
                 q.push({dis[v.fi], v.fi});
            }
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v, c; cin >> u >> v >> c;
        ke[u].push_back({v,c});
        ke[v].push_back({u,c});
    }
    cout << prim(1) << "\n";
}