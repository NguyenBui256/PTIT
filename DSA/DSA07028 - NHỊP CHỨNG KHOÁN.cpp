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
    st.push(-1);
    FOR(i,0,n) 
    {
        while(st.size() > 1 && a[st.top()] <= a[i]) st.pop(); //tim so dau tien lon hon a[i] o ben trai
        cout << i - st.top() << ' ';    
        st.push(i);
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