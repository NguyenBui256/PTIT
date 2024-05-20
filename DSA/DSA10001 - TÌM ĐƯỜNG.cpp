#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define all(a) a.begin(), a.end()

int n, m, ok = 0;
char a[505][505];
int vst[505][505];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
char dir[4] = {'U', 'D', 'L', 'R'};

void dfs(int i, int j, int cnt, char curdir){
    vst[i][j] = 1;
    if(a[i][j] == 'T' && cnt <= 2){
        ok = 1;
        return;
    }
    if(cnt > 2 || a[i][j] == 'T'){
        vst[i][j] = 0;
        return;
    }
    FOR(k,0,4){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] != '*' && !vst[i1][j1]){
            if(dir[k] != curdir) dfs(i1,j1,cnt+1,dir[k]);
            else dfs(i1,j1,cnt,dir[k]);
        }
    }
    vst[i][j] = 0; //backtrack
}

void solve(){
    ok = 0;
    memset(vst,0,sizeof(vst));
    cin >> n >> m;
    int x, y;
    FOR(i,0,n){
        FOR(j,0,m){
            cin >> a[i][j];
            if(a[i][j] == 'S'){
                x = i; y = j;
            }
        }
    }
    dfs(x,y,-1,'G');
    if(ok) cout << "YES\n";
    else cout << "NO\n";
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