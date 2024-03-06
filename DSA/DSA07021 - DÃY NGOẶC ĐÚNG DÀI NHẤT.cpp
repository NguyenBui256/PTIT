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
    string s;
    cin >> s;
    stack<int> st;
    st.push(-1);
    int Max = 0;
    FOR(i,0,s.size())
    {
        if(s[i] == '(') st.push(i);
        else
        {
            st.pop();
            if(st.empty()) st.push(i);
            else Max = max(Max, i - st.top());
        }
    }
    cout << Max << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    // TEST   
        
}