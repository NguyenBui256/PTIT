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
    string s; cin >> s;
    stack<char> st;
    string ans, tmp, num;
    int n = s.size();
    FOR(i,0,n)
    {
        if(s[i] == ']')
        {
            tmp = ""; ans = ""; num = "";
            while(st.top() != '[') 
            {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop(); //pop dau' [
            while(!st.empty() && '0' <= st.top() && st.top() <= '9')
            {
                num = st.top() + num;
                st.pop();
            }
            int times = 0;
            if(num != "") times = stoi(num);
            if(!times) times++;
            FOR(i,0,times) ans += tmp;
            for(auto j : ans) st.push(j);
        }
        else st.push(s[i]);
    }
    ans = "";
    while(!st.empty()) 
    {
        ans = st.top() + ans;
        st.pop();
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