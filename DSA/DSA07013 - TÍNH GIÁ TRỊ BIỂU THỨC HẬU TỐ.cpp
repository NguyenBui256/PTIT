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
    string s; 
    getline(cin,s);
    stack<string> st;
    int n = s.size();
    int ans = 0;
    string a = "", b = "";
    FOR(i,0,n)
    {
        if(s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*') 
        {
            string tmp = ""; 
            tmp += s[i];
            st.push(tmp);
        }
        else
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            int tmp = 0;
            if(s[i] == '+') tmp = stoi(a) + stoi(b);
            else if(s[i] == '-') tmp = stoi(b) - stoi(a); 
            else if(s[i] == '*') tmp = stoi(b) * stoi(a);
            else if(s[i] == '/') tmp = stoi(b) / stoi(a);
            // cout << tmp << "\n";
            st.push(to_string(tmp));
            ans = tmp;
        }
    }
    cout << ans << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t; cin.ignore();
    // TEST   
    while(t--)
        solve();
}