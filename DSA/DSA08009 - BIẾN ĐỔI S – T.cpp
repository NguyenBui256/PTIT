#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k,t;

int Try(int n, int m)
{
    queue<int> q;
    map<int,int> mp;
    mp[n] = 0;
    q.push(n);
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        if(u == m) return mp[m];
        if(mp[2*u] == 0 && u < m)
        {
            q.push(2*u);
            mp[2*u] = mp[u] + 1;
        }
        if(mp[u - 1] == 0 && u - 1 >= 0)
        {
            q.push(u-1);
            mp[u-1] = mp[u] + 1;
        }
    }
}


void solve()
{
    cin >> n >> m;
    cout << Try(n,m) << "\n";
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