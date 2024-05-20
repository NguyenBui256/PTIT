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
    stack<string> st;
    int n = s.size();
    string a = "",b = "";
    FORD(i,n-1,-1)
    {
        if(s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*') 
        {
            string tmp = ""; tmp += s[i];
            st.push(tmp);
        }
        else
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            string tmp = a;
            tmp += b;
            tmp += s[i];
            st.push(tmp);
        }
    } 
    cout << st.top() << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}