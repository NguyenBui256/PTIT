#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int Min = 1e9;
int n, k, final = 0;
vector<vector<int>> ans;
string s; 

void dq(int i, string q)
{
    for(int j = i + 1; j < s.size(); j++) 
    {
        q += s[j];
        cout << q << ' ';
        dq(j,q);
        q.pop_back();
    }
}

void solve() 
{
    vector<ll> a,b;
    cin >> n;
    a.resize(n); b.resize(n);
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n) cin >> b[i];
    sort(begin(a),end(a));
    sort(begin(b), end(b), greater<ll>());
    ll ans = 0;
    FOR(i,0,n) ans += a[i] * b[i];
    cout << ans << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}