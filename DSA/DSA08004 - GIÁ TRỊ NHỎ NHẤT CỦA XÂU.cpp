#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k,t;

void solve()
{
    cin >> k;
    string s; cin >> s;
    map<char,int> mp;
    FOR(i,0,s.size()) mp[s[i]]++;
    priority_queue<int> q;
    FOR(i,0,s.size()) 
    {
        if(mp[s[i]]) 
        {
            q.push(mp[s[i]]);
            mp[s[i]] = 0;
        }
    }
    ll ans = 0;
    while(k--)
    {
        int tmp = q.top();
        q.pop(); q.push(tmp-1);
    }
    while(!q.empty())
    {
        ans += 1ll*q.top()*q.top();
        q.pop();
    }
    cout << ans << "\n";
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