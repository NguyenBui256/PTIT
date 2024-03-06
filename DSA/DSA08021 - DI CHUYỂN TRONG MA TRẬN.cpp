#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

// int n, k, s, final = 0;
int a[1003][1003];
// int X[100];
int ans = 0;


void solve()
{   
    int n, m; cin >> n >> m;
    int Min = 1e9;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1) cin >> a[i][j];
    }
    queue<pair<int,pair<int,int>>> q;
    vector<vector<int>> check(n+1,vector<int>(m+1,1));
    q.push(make_pair(0,make_pair(1,1)));
    while(!q.empty())
    {
        pair<int,pair<int,int>> tmp = q.front();
        q.pop();
        int val = a[tmp.second.first][tmp.second.second];
        if(tmp.second.first == n && tmp.second.second == m) 
        {
            Min = min(Min,tmp.first);
        }
        if(tmp.second.first + val <= n && check[tmp.second.first + val][tmp.second.second]) 
        {
            check[tmp.second.first + val][tmp.second.second] = 0;
            q.push(make_pair(tmp.first + 1,make_pair(tmp.second.first + val, tmp.second.second)));
        }
        if(tmp.second.second + val <= m && check[tmp.second.first][tmp.second.second + val]) 
        {
            check[tmp.second.first][tmp.second.second + val] = 0;
            q.push(make_pair(tmp.first + 1,make_pair(tmp.second.first, tmp.second.second + val)));
        }
    }
    if(Min != 1e9) cout << Min << "\n";
    else cout << "-1\n";
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}