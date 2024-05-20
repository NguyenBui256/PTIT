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
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()
#define reset(a) memset(a,0,sizeof(a))

ll MOD = 1e9 + 7;

int n, m, k, ans;
int visited[105][105];
int posX[4] = {1, -1, 0, 0};
int posY[4] = {0, 0, -1, 1};
vector<ii> sheep;
map<pair<ii, ii>, int> mp;
map<ii, int> ddsheep;
set<pair<ii, ii>> s;
void dfs(int x, int y)
{
    visited[x][y] = 1;

    FOR(i, 0, 4)
    {
        int a = x + posX[i];
        int b = y + posY[i];
        if (a >= 1 && a <= n && b >= 1 && b <= n && !visited[a][b] && mp[{{x, y}, {a, b}}] != 1)
            dfs(a, b);
    }
}

void solve()
{
    cin >> n >> k >> m;
    while (m--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        mp[{{a, b}, {c, d}}] = 1;
        mp[{{c, d}, {a, b}}] = 1;
    }

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        sheep.pb({a, b});
        ddsheep[{a, b}] = 1;
    }

    for (ii i : sheep)
    {
        reset(visited);
        dfs(i.fi, i.se);
        FOR(p, 1, n + 1)
        FOR(j, 1, n + 1)
        {
            if (visited[p][j] == 0 && ddsheep[{p, j}] == 1)
            {
                s.insert({{i.fi, i.se}, {p, j}});
                s.insert({{p, j}, {i.fi, i.se}});
            }
        }
    }

    cout << s.size() / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // TEST
    {
        solve();
    }
}