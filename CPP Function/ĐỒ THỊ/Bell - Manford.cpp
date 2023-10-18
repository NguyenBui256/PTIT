#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--)
#define fi first
#define se second

struct edge{
	int x,y,w;
};

int n, m, u;
vector<edge> E;

void nhap()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        edge e;
        cin >> e.x >> e.y >> e.w;
        E.push_back(e);
    }
    cin >> u; // source;
}



void Bell_Manford(int u) // u: source
{
    vector<int> d(n + 1, 1e9); //distance, ban đầu khởi tạo bằng INF
    d[u] = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        for(edge e : E)
        {
            if(d[e.x] != 1e9 && d[e.x] + e.w < d[e.y])
            {
                d[e.y] = d[e.x] + e.w;
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << d[i] << " ";  //d[i] lưu kcach ngắn nhất từ source đến đỉnh i
    
    // kiểm tra liệu có chu trình âm (edge weight âm)
    int ok = 0;
    for(edge e : E)
    {
        if(d[e.x] != 1e9 && d[e.x] + e.w < d[e.y]) // vẫn còn
        {
            ok = 1;
            break;
        }
    }
}


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        E.clear();
        nhap();
        Bell_Manford(u);
    }
}