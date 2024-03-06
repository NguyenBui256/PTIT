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
    cin >> n;
    int a[n+1], b[n+1];
    stack<int> st;
    FOR(i,1,n+1) cin >> a[i];
    FORD(i,n,0) 
    {
        while(!st.empty() && a[i] >= st.top()) st.pop();
        if(st.empty()) b[i] = -1;
        else b[i] = st.top();
        st.push(a[i]);
    }
    FOR(i,1,n+1) cout << b[i] << ' ';
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