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

int n, m;

void solve()
{
    cin >> n;
    int a[n], b[n], l[n];
    map<int,int> mp;
    FOR(i,0,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    FOR(i,0,n){
        b[i] = mp[a[i]];
    }
    stack<int> st;
    FORD(i,n-1,-1){
        while(!st.empty() && b[i] >= b[st.top()]) st.pop();
        if(st.empty()) l[i] = -1;
        else l[i] = a[st.top()];
        st.push(i);
    }
    FOR(i,0,n) cout << l[i] << ' ';
    cout << "\n";
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