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

struct alo
{
    int x, y, z;
};

alo S, E;
int A, B, C;
int dp[35][35][35];
char a[35][35][35];
int gotoX[] = {1, -1, 0, 0, 0, 0};
int gotoY[] = {0, 0, 1, -1, 0, 0};
int gotoZ[] = {0, 0, 0, 0, 1, -1};

int check(int i, int j, int k)
{
    return (i >= 0 && i < A && j >= 0 && j < B && k >= 0 && k < C && !dp[i][j][k] && a[i][j][k] != '#');
}

void BFS()
{
    memset(dp,0,sizeof(dp));
    queue<alo> q;
    q.push(S);
    dp[S.x][S.y][S.z] = 1;

    while (!q.empty())
    {
        alo front = q.front();
        q.pop();
        FOR(i, 0, 6)
        {
            int x1 = front.x + gotoX[i], y1 = front.y + gotoY[i], z1 = front.z + gotoZ[i];

            if (check(x1,y1,z1))
            {
                if (x1 == E.x && y1 == E.y && z1 == E.z)
                {
                    cout << dp[front.x][front.y][front.z] << "\n";
                    return;
                }

                dp[x1][y1][z1] = dp[front.x][front.y][front.z] + 1;

                q.push({x1, y1, z1});
            }
        }
    }

    cout << "-1\n";
}

void solve()
{
    cin >> A >> B >> C;

    FOR(i, 0, A)
    FOR(j, 0, B)
    FOR(k, 0, C)
    {
        cin >> a[i][j][k];
        if (a[i][j][k] == 'S')
            S = {i, j, k};
        else if (a[i][j][k] == 'E')
            E = {i, j, k};
    }

    BFS();
}

int main()
{
    int t = 1;
    TEST
    {
        solve();
    }
}