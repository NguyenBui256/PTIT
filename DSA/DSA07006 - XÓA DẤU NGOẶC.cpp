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

int done = 0;
int b[2000];
vector<pair<int,int>> v;

void sinh()
{
    int i = v.size() - 1;
    while(i >= 0 && b[i] == 1)
    {
         b[i] = 0;
         i--;
    }
    if(i == -1) done = 1;
    else b[i] = 1;
}

void solve(){
    string s; cin >> s;
    stack<char> st;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')') 
        {
            v.pb({st.top(),i});
            st.pop();
        }
    }
    if(v.empty()) return;
    // for(auto it : v) cout << it.fi << ' ' << it.se << "\n";
    int c[s.size()] = {};
    set<string> ans;
    while(!done)
    {
        memset(c,0,sizeof(c));
        for(int i = 0; i < v.size(); i++) 
        {
            if(b[i]) 
            {
                c[v[i].first] = 1;
                c[v[i].second] = 1;
            }
        }
        string tmp = "";
        FOR(i,0,n) if(!c[i]) tmp += s[i];
        ans.insert(tmp);
        sinh();
    }
    for(auto k : ans) if(k != s) cout << k << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // TEST
    {
        solve();
    }
}