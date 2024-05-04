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

int n, m, s, Max = 0, ok = 0;
char a[105][105];
int used[105][105];
unordered_map<string,int> mp;
vector<string> v;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i, int j, string s)
{
    if(s.size() > Max) return;
    if(mp[s]){
        cout << s << ' ';
        ok = 1;
    }
    FOR(k,0,8){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !used[i1][j1]){
            used[i1][j1] = 1;
            Try(i1,j1,s + a[i1][j1]);
            used[i1][j1] = 0;
        }
    }

}

void solve()
{
    Max = 0;
    ok = 0;
    v.clear();
    mp.clear();
    cin >> s >> n >> m;
    v.resize(s);
    for(string &i : v) 
    {
        cin >> i;
        mp[i] = 1;
        Max = max(Max, (int)i.size());
    }
    FOR(i,1,n+1){
        FOR(j,1,m+1) cin >> a[i][j];
    }
    FOR(i,1,n+1){
        FOR(j,1,m+1){
            memset(used,0,sizeof(used));
            used[i][j] = 1;
            Try(i,j,string(1,a[i][j]));
        }
    }
    if(!ok) cout << "-1";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}