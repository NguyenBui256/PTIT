#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, m;
int a[505][505];
int x[505][505];
int y[505][505];

int max_area(int x[])
{
    int res = 0;
    int i = 0;
    stack<int> st;
    while(i < m)
    {
        if(st.empty() || x[i] >= x[st.top()]) st.push(i++);
        else
        {
            int top = st.top(); st.pop();
            if(st.empty())
            {
                res = max(res, i * x[top]);
            }
            else
            {
                res = max(res, x[top] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty())
    {
        int top = st.top(); st.pop();
            if(st.empty())
            {
                res = max(res, i * x[top]);
            }
            else
            {
                res = max(res, x[top] * (i - st.top() - 1));
            }
    }
    return res;
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i == 1) y[i][j] = a[i][j];
            else if(a[i][j])
            {
                y[i][j] = y[i-1][j] + 1;
            }
            else y[i][j] = 0;
            // cout << x[i][j] * y[i][j] << "\n";
        }
    }
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, max_area(y[i]));
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1; 
    cin >> t;
    while(t--) solve();
}