#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, X, Y;

int d[100][100];

int dx[8] = {-2,-2,2,2,-1,-1,1,1};
int dy[8] = {-1,1,-1,1,-2,2,-2,2};

int Try(int x, int y)
{
    memset(d,0,sizeof(d));
    queue<pair<int,int>> q;
    d[x][y] = 0;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        pair<int,int> u = q.front(); 
        q.pop();
        if(u.first == X && u.second == Y) return d[X][Y];
        FOR(k,0,8)
        {
            int x1 = u.first + dx[k];
            int y1 = u.second + dy[k];
            if(x1 >= 1 && x1 <= 8 && y1 >= 1 && y1 <= 8 && !d[x1][y1])
            {
                q.push(make_pair(x1,y1));
                d[x1][y1] = d[u.first][u.second] + 1;
            }
        }
    }
}


void solve()
{
    string s,t;
    cin >> s >> t;
    X = (int)(t[0] - 'a' + 1);
    Y = (int)(t[1] - '0'); 
    // cout << X << ' ' << Y << "\n";
    cout << Try((int)(s[0] - 'a' + 1), (int)(s[1] - '0')) << "\n";
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