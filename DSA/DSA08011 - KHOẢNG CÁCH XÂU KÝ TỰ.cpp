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
vector<string> ke[100003];
map<string,bool> ok;
map<string,int> dem;
map<string,int> mp;

int n;
string st,E;
set<string> se;

void BFS()
{
    queue<pair<string,int>> q;
    q.push({st,1});
    while(!q.empty())
    {
        auto it = q.front(); q.pop();
        string tmp = it.fi;
        if(tmp == E) 
        {
            cout << it.second << "\n";
            return;
        }
        for(char &x : tmp)
        {
            char save = x;
            for(char j = 'A'; j <= 'Z'; j++)
            {
                x = j;
                if(se.count(tmp)) 
                {
                    se.erase(tmp);
                    q.push({tmp,it.second + 1});
                }
            }
            x = save;
        }
    }
}

void solve(){
    cin >> n;
    cin >> st >> E;
    se.clear();
    while(n--)
    {
        string x; cin >> x;
        se.insert(x);
    }
    BFS();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}