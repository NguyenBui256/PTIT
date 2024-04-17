#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
// #define se second
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
    string s; cin >> s;
    stack<char> l,r;
    for(auto x : s)
    {
        if(x == '<') 
        {
            if(!l.empty())
            {
                r.push(l.top());
                l.pop();
            }
        } else if(x == '>')
        {
            if(!r.empty())
            {
                l.push(r.top());
                r.pop();
            }
        } else if(x == '-')
        {
            if(!l.empty()) l.pop();
        } else l.push(x);
    }
    string ans = "";
    while(!l.empty())
    {
        ans += l.top();
        l.pop();
    }
    reverse(all(ans));
    while(!r.empty()) 
    {
        ans += r.top();
        r.pop();
    }
    cout << ans;
}

int main()
{
    // fast;
    // init();
    int t = 1;
    // TEST
    {
        solve();
    }
}