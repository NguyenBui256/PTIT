#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

// int n, k, s, final = 0;
int a[100][100];
// int X[100];
int cot[100], nguoc[100], xuoi[100];
int ans = 0;

stack<int> st;


void solve()
{   
    string s;
    cin >> s;
    if(s == "PUSH") 
    {
        int x; cin >> x;
        st.push(x);
    }else if(s == "POP")
    {
        if(!st.empty()) st.pop();
    }
    else 
    {
        if(!st.empty()) cout << st.top() << "\n";
        else cout << "NONE\n";
    }
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}