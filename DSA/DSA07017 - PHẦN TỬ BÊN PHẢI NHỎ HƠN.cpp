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

int a[10000003];

int R[1000003], L[1000003];


void solve()
{
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    stack<int> st;
    FORD(i,n-1,-1) 
    {
        while(!st.empty() && a[i] >= a[st.top()]) st.pop();
        if(st.empty()) R[i] = -1;
        else R[i] = st.top();
        st.push(i);
    }
    stack<int> s;
    FORD(i,n-1,-1) 
    {
        while(!s.empty() && a[i] <= a[s.top()]) s.pop();
        if(s.empty()) L[i] = -1;
        else L[i] = s.top();
        s.push(i);
    }
    FOR(i,0,n) 
    {
        if(R[i] == -1) cout << "-1 ";
        else 
        {
            if(L[R[i]] == -1) cout << "-1 ";
            else cout << a[L[R[i]]] << ' ';
        }
    }
    cout << "\n";
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