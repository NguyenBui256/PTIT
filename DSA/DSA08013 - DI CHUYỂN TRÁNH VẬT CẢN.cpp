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

void solve()
{
    int n; cin >> n;
    char a[n+1][n+1] = {};
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1) cin >> a[i][j];
    }
    queue<pair<int,int>> q;
    map<pair<int,int>, int> mp;
    int x,y,c,d; cin >> x >> y >> c >> d;
    c++;
    d++;
    q.push({x+1,y+1});
    int ans = 1e9;
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        int hang = it.fi, cot = it.se;
        // cout << hang << ' ' << cot << "\n";
        // break;
        if(hang == c && cot == d)
        {
            ans = mp[{c,d}];
            break;
        }
        if(cot - 1 >= 1) 
        {
            for(int i = cot - 1; i >= 1; i--)
            {
                if(a[hang][i] == 'X') break;
                if(mp[{hang,i}] == 0) 
                {
                    q.push({hang,i});
                    mp[{hang,i}] = mp[{hang,cot}] + 1;
                }
            }
        }
        if(cot + 1 <= n)
        {
            for(int i = cot + 1; i <= n; i++) 
            {
                if(a[hang][i] == 'X') break;
                if(mp[{hang,i}] == 0) 
                {
                    q.push({hang,i});
                    mp[{hang,i}] = mp[{hang,cot}] + 1;
                }
            }
        }
        if(hang - 1 >= 1)
        {
            for(int i = hang - 1; i >= 1; i--)
            {
                if(a[i][cot] == 'X') break;
                if(mp[{i,cot}] == 0) 
                {
                    q.push({i,cot});
                    mp[{i,cot}] = mp[{hang,cot}] + 1;
                }
            }
        }
        if(hang + 1 <= n)
        {
            for(int i = hang + 1; i <= n; i++)
            {
                if(a[i][cot] == 'X') break;
                if(mp[{i,cot}] == 0) 
                {
                    q.push({i,cot});
                    mp[{i,cot}] = mp[{hang,cot}] + 1;
                }
            }
        }
        // break;
    }
    cout << ans << "\n";
}

int main()
{
    int t = 1;
    TEST
    {
        solve();
    }
}