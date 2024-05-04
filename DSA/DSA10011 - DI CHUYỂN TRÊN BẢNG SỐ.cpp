#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m;
int a[1005][1005];
map<pair<int,int>, int> mp;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

class Compare{
    public:
    bool operator()(pair<ii,int> a, pair<ii,int> b)
    {
        return a.se > b.se;
    }
};

void dijkstra()
{
    priority_queue<pair<ii,int>, vector<pair<ii,int>>, Compare> q;
    q.push({{1,1}, a[1][1]});
    mp[{1,1}] = 1;
    while(!q.empty()){
        auto top = q.top();
        q.pop();
        if(top.fi.fi == n && top.fi.se == m)
        {
            cout << top.se << "\n";
            return;
        }
        FOR(k,0,4)
        {
            int i1 = top.fi.fi + dx[k];
            int j1 = top.fi.se + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && mp[{i1,j1}] == 0)
            {
                mp[{i1,j1}] = 1;
                q.push({{i1,j1}, top.se + a[i1][j1]});
            }
        }
    }
}

void solve()
{
    mp.clear();
    cin >> n >> m;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1){
            cin >> a[i][j];
        }
    }
    dijkstra();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}
