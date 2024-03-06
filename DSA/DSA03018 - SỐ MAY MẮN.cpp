#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k, s ,t;
vector<vector<int>> ke(1003);
// int ans[1003][1003];
int check[1003];

// void dfs(int root, int u)
// {
//     check[u] = 1;
//     for(int v : ke[u])
//     {
//         if(!check[v]) 
//         {
//             ans[root][v] = 1; ans[v][root] = 1;
//             dfs(root,v);
//         }
//     }
// }

void solve()
{
    cin >> n;
    int d7 = n / 7; //ban đầu, tạo nên số chứa toàn số 7
    n %= 7;
    int u4 = n / 4; //số số 4 ban đầu
    int d4 = n % 4; //số phần dư cần xử lí
    if(!d4) //nếu chia hết in luôn
    {
        for(int i = 0; i < n / 4; i++) cout << 4;
        for(int i = 0; i < d7; i++) cout << 7;
    }
    else
    {
        if(d7 >= d4) // bỏ 1 số 7 thay bằng 2 số 4 sẽ làm tổng tăng lên 1 => cần làm như thế (n % 4) lần
        {
            d7 -= d4; //bỏ đi (n % 4) số 7
            u4 += (n % 4) * 2; //số số 4 tăng lên (n % 4) * 2;
            for(int i = 0; i < u4; i++) cout << 4;
            for(int i = 0; i < d7; i++) cout << 7;
        }
        else 
        {
            cout << "-1\n";
            return;
        }
    }
    cout << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}