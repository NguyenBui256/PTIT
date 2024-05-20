#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int n, m;
set<int> ke[1005];
int par[1005];
int check[1005];
int ok = 0, fin;

void DFS(int u)
{
    stack<int> st;
    st.push(u);
    check[u] = 1;
    while(!st.empty())
    {
        u = st.top();
        st.pop();
        for(auto i : ke[u])
        {
            if(i == 1 && par[u] != 1)
            {
                ok = u;
                break;
            }  
            if(!check[i])
            {
                check[i] = 1;
                st.push(u);
                st.push(i);
                par[i] = u;
                break;
            }
        }
        if(ok) break;
    }
    if(ok) 
    {
        vector<int> ans;
        while(par[ok]) 
        {
            ans.pb(ok);
            ok = par[ok];
        }
        cout << 1 << ' ';
        reverse(ans.begin(), ans.end());
        for(int x : ans) cout << x << ' ';
        cout << 1 << "\n";
    }
    else cout << "NO\n";
}

void solve()
{
    ok = 0;
    FOR(i,0,1003) ke[i].clear();
    memset(par,0,sizeof(par));
    memset(check,0,sizeof(check));
    cin >> n >> m;
    int x, y;
    FOR(i,0,m) 
    {
        cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
    }
    DFS(1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
    {
        solve();
    }
}