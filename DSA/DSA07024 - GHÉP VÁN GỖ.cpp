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

ll MOD = 1e9 + 7;
int n;

void solve(){
    cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        return;
    }
    vector<int> v(n), l(n), r(n);
    FOR(i,0,n) cin >> v[i];
    stack<int> st;
    //tìm phần tử gần nhất ở bên trái lớn hơn v[i], đánh dấu phần tử bên phải của nó
    FOR(i,0,n){
        while(!st.empty() && v[i] <= v[st.top()]) st.pop();
        if(st.empty()) l[i] = 0;
        else l[i] = st.top() + 1; 
        st.push(i);
    }
    st = stack<int>{};
    //tìm phần tử gần nhất ở bên phải lớn hơn v[i], đánh dấu phần tử bên trái của nó
    FORD(i,n-1,-1){
        while(!st.empty() && v[i] <= v[st.top()]) st.pop();
        if(st.empty()) r[i] = n - 1;
        else r[i] = st.top() - 1;
        st.push(i);
    }
    int ans = 0;
    FOR(i,0,n){
        if(v[i] <= r[i] - l[i] + 1) ans = max(ans, v[i]);
    }
    cout << ans << "\n";
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