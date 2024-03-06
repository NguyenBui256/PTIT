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
    string s;
    cin >> s;
    stack<char> st;
    int ok = 0;
    FOR(i,0,s.size())
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        else 
        {
            if(!st.empty())
            {
                char tmp = st.top();
                st.pop();
                if((s[i] == ')' && tmp != '(') ||(s[i] == ']' &&  tmp != '[') || (s[i] == '}' && tmp != '{'))  
                {
                    ok = 1;
                    break;
                }
            }
            else 
            {
                ok = 1; 
                break;
            }
        }
    }
    if(ok) cout << "NO\n";
    else cout << "YES\n";
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