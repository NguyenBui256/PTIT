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
    queue<int> q;
    int n; cin >> n;
    map<int,int> mp;
    q.push(n);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        if(tmp == 1) 
        {
            cout << mp[tmp] << "\n";
            return;
        }
        int l = 0;
        for(int i = sqrt(tmp); i >= 2; i--)
        {
            if(tmp % i == 0)
            {
                l = max(i,tmp /i);
                if(mp[l] == 0) 
                {
                    mp[l] = mp[tmp] + 1;
                    q.push(l);
                }
            }
        }
        if(tmp > 1 && mp[tmp - 1] == 0) 
        {
            mp[tmp-1] = mp[tmp] + 1;
            q.push(tmp-1);  
        }
    }
}

int main()
{
    // fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}