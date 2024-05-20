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
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()
#define reset(a) memset(a,0,sizeof(a))

ll MOD = 1e9 + 7;
string s;

ll calc(ll a, ll b, char c)
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
}

int check(char c)
{
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

void solve()
{
    cin >> s;
    stack<ll> so;
    stack<char> st;

    FOR(i, 0, s.size())
    {
        if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ll cur1 = so.top();
                so.pop();
                ll cur2 = so.top();
                so.pop();
                char dau = st.top();
                st.pop();
                so.push(calc(cur2, cur1, dau));
            }
            if (!st.empty())
                st.pop();
        }
        else if (isdigit(s[i]))
        {
            ll cur = 0;
            while (i < s.size() && isdigit(s[i]))
            {
                cur = cur * 10 + (s[i] - '0');
                i++;
            }
            so.push(cur);
            i--;
        }
        else
        {
            while (!st.empty() && check(st.top()) >= check(s[i]))
            {
                ll cur1 = so.top();
                so.pop();
                ll cur2 = so.top();
                so.pop();
                char dau = st.top();
                st.pop();
                so.push(calc(cur2, cur1, dau));
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        ll cur1 = so.top();
        so.pop();
        ll cur2 = so.top();
        so.pop();
        char dau = st.top();
        st.pop();
        so.push(calc(cur2, cur1, dau));
    }

    cout << so.top() << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}