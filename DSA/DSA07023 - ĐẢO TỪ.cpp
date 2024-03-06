#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n, m, k, s ,t;

void solve()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    stack<string> st;
    while(ss >> tmp) st.push(tmp);
    while(!st.empty()) cout << st.top() << ' ', st.pop();
    cout << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--)
        solve();
    // TEST   
        
}