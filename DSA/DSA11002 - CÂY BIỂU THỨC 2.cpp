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
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m;
vector<vector<int>> Mat;
int par[1005];

void solve()
{
    cin >> n;
    vector<string> s(n);   
    queue<string> st;
    FOR(i,0,n) cin >> s[i];
    FORD(i,n-1,-1)
    {
        if(s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/")
        {
            ll a = stoll(st.front()); st.pop();
            ll b = stoll(st.front()); st.pop();
            st.push(to_string(s[i] == "+" ? a+b : s[i] == "-" ? b-a : s[i] == "*" ? a*b : b/a));
        }else st.push(s[i]);
    }
    cout << st.front() << "\n";
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
