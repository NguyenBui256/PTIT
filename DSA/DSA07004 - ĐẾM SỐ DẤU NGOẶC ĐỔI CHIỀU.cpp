#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

void solve()
{
    string s; cin >> s;
    stack<char> st;
    int n = s.size();
    int ans = 0, cnt = 0;
    FOR(i,0,n)
    { 
        if(s[i] == '(') st.push(s[i]);
        else 
        {
            if(!st.empty()) st.pop();
            else cnt++;
        }
    }
    if(cnt % 2 == 0) ans = st.size() / 2 + cnt / 2;
    else ans = st.size() / 2 + cnt / 2 + 2;
    cout << ans << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}