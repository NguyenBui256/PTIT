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

int degree(char c)
{
    if(c == '^') return 4;
    if(c == '*' || c == '/') return 3;
    if(c == '+' || c == '-') return 2;
    return 1;
}

void solve()
{
    string s; cin >> s;
    stack<string> st;
    int n = s.size();
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
        else{
            string tmp = "(";
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            tmp += b;
            tmp += s[i];
            tmp += a;
            tmp += ")";
            st.push(tmp);
        }
    }
    cout << st.top() << "\n";
    
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}