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
    int s, d; cin >> d >> s;
    stack<int> st;
    string ans = "", Max = "";
    if(d == 1 && s == 0) 
    {
        cout << "0 0"; 
        return;
    }
    if(s == 0 || d * 9 < s) 
    {
        cout << "-1 -1\n";
        return;
    } 
    else
    {
        int store = s;
        int num = d;
        --s;
        while(d--)
        {
            if(s >= 9)
            {
                st.push(9);
                s -= 9;
            }
            else if(s >= 0)
            {
                st.push(s);
                s = 0;
            }
            else st.push(0);
        }
        ans = "";
        ans += to_string(st.top() + 1); st.pop();
        while(!st.empty()) ans += to_string(st.top()), st.pop();

        while(num--)
        {
            if(store >= 9) 
            {
                Max += "9";
                store -= 9;
            }else if(store >= 0) 
            {
                Max += to_string(store);
                store = 0;
            }
            else Max += "0";
        }
    }
    cout << ans << " " << Max << "\n";
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // TEST   
        solve();
}