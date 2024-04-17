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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int a[1000005], dem[100005], ok[100005];
vector<int> nt;
vector<int> ke[100003];

void sang()
{
    for(int i = 2; i <= 103; i++)
    {
        if(!a[i]) 
        {
            for(int j = i * i; j <= 9999; j += i) a[j] = 1;
        }
    }
    FOR(i,1000,10000)
    {
        if(!a[i]) nt.pb(i);
    }
}

bool check(int a, int b)
{
    int d = 0;
    while(a && b)
    {
        if(a % 10 != b % 10) d++;
        a/=10; b/=10;
    }
    return d == 1;
}

void init(){
    for(int i = 0; i < nt.size() - 1; i++)
    {
        for(int j = i + 1; j < nt.size(); j++)
        {
            if(check(nt[i],nt[j]))
            {
                ke[nt[i]].pb(nt[j]);
                ke[nt[j]].pb(nt[i]);
            }
        }
    }
}

int BFS(int u, int end)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(u == end) return dem[u];
        for(int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
            if(ok[v]) continue;
            ok[v] = true;
            dem[v] = dem[u] + 1;
            q.push(v);
        }
    }
}

void solve(){
    memset(dem,0,sizeof(dem));
    memset(ok,0,sizeof(ok));
    int x, y;
    cin >> x >> y;
    cout << BFS(x,y) << "\n";
}

int main()
{
    sang();
    init();
    int t = 1;
    TEST
    {
        solve();
    }
}