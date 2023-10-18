#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int mod = 1e9 + 7;

int n, m;
int visited[1005], in_stack[1005];
vector<int> ke[1005];
int disc[1005], low[1005];
int timer = 0;
stack<int> st;

//mảng disc[u]: thời gian thăm đỉnh u tính từ đỉnh đầu tiên gọi DFS;
//mảng low[u]: chỉ ra thời gian thăm sớm nhất của một đỉnh có thể đi tới được từ một cây con gốc u.

int scc = 0; //biến đếm số tplt mạnh

void nhap()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    memset(visited, 0, sizeof(visited));
}

void DFS(int u) //kiểm tra trong đồ thị xuôi
{
    visited[u] = 1; in_stack[u] = 1;
    low[u] = disc[u] = ++timer;
    st.push(u);
    for(int v : ke[u]) 
    {
        if(!visited[v])
        {
            DFS(v);
            low[u] = min(low[u], low[v]);
        }
        else
        {
            low[u] = min(low[u], disc[v]); 
        }	
    }
    if(low[u] == disc[u]) //low = disc thì được 1 TPLT mạnh mới.
    {
        scc++;
        while(st.top() != u)
        {
            cout << st.top() << ' ';
            in_stack[st.top()] = 0;
            st.pop();  
        }
        cout << st.top() << ' ';
        in_stack[st.top()] = 0;
        st.pop();
    }
}
 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nhap();
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i]) DFS(i);
    }
    cout << scc << "\n"; 
}