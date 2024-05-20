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
    int ok = 1;
    FOR(i,0,n)
    {
        if(s[i] == ')')
        {
            int found = 0;
            while(!st.empty() && st.top() != '(')
            {
                if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/') found = 1;
                st.pop();
            }
            // cout << i << ' ' << found << '\n';
            if(st.top() == '(') st.pop();
            if(!found)
            {
                ok = 0;
                break;
            }
        }
        else if(s[i] != ' ') st.push(s[i]);
    }
    if(ok) cout << "No\n";
    else cout << "Yes\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}