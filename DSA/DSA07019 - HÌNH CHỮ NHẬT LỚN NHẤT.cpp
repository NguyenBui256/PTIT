#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

// int F[1003][1003];
int a[10000003];
ll n, m;

void solve()
{
    stack<ll> st;
    ll res = LONG_LONG_MIN;
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    ll i = 0;
    while(i < n)
    {
        if(st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++;    
        }
        else {
            ll idx = st.top();
            st.pop();
            if(st.empty()) 
            {
                res = max(res, 1ll * a[idx] * i);
            }
            else res = max(res, 1ll * a[idx] * (i - st.top() - 1));
        }
    }
    while(!st.empty())
    {
        int idx = st.top();
        st.pop();
        if(st.empty()) 
        {
            res = max(res, a[idx] * i);
        }
        else res = max(res, a[idx] * (i - st.top() - 1));
    }
    cout << res << "\n";
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

// Hinh vuong nho nhat: C[i][j] = min(C[i-1][j-1], min(C[i-1][j], C[i][j-1])) + 1;