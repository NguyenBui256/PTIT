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

void solve()
{
    string s; cin >> s;
    int n = s.size();
    stack<string> s1;
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i])) 
        {
            string tmp = ""; tmp += s[i]; s1.push(tmp);
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
        {
            string a = s1.top(); s1.pop();
            string b = s1.top(); s1.pop();
            string tmp = "";
            tmp += s[i]; tmp += b; tmp += a;
            s1.push(tmp);
        }
    }
    cout << s1.top() << "\n";
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