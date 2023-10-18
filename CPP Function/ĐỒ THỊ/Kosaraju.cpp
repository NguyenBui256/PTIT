#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int mod = 1e9 + 7;

int n, m;
int visited[1005];
vector<int> ke[1005], ke_dao[1005];
stack<int> st;

void nhap()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke_dao[y].push_back(x); // do thi dao nguoc transpose-graph;
    }
    memset(visited, 0, sizeof(visited));
}

void DFS1(int u) //kiểm tra trong đồ thị xuôi
{
    visited[u] = 1;
    for(int v : ke[u]) 
    {
        if(!visited[v]) DFS1(v);
    }
    st.push(u);
}

void DFS2(int u) //kiểm tra trong đồ thị đảo chiều
{
    visited[u] = 2;
    cout << u << ' ';
    for(int v : ke_dao[u])
    {
        if(!visted[v]) DFS2(v);
    }
}

void Kosaraju() // đếm số thành phần liên thông mạnh
{
    for(int i = 1; i <= n; i++)
    {
        if(!visted[i]) DFS1(i);
    }
    memset(visited,0,sizeof(visited));
    int so_thanh_phan_lien_thong_manh = 0;
    while(!st.empty()) // mỗi thành phần trong stack nếu chưa đc thăm thì sẽ thuộc một tpltm mới.
    {
        int u = st.top(); st.pop();
        if(!visited[u])
        {
            so_thanh_phan_lien_thong_manh++;
            cout << "TPLTM thu' " << so_thanh_phan_lien_thong_manh << " : ";
            DFS2(u);
            cout << "\n";
        }
        
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nhap();
    Kosaraju();
}