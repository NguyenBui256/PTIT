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

string proc(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (i != ')') st.push(i);
        else
        {
            stack<char> tmp;

            while (!st.empty() && st.top() != '(')
            {
                tmp.push(st.top());
                st.pop();
            }

            st.pop();

            if (!st.empty() && st.top() == '-')
            {
                while (!tmp.empty())
                {
                    if (tmp.top() == '+') st.push('-');
                    else if (tmp.top() == '-') st.push('+');
                    else
                        st.push(tmp.top());
                    tmp.pop();
                }
            }
            else
            {
                while (!tmp.empty())
                {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
        }
    }

    string ans = "";

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(all(ans));
    return ans;
}

void solve(){
    string s, t; cin >> s >> t;
    if(proc(s) == proc(t)) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}