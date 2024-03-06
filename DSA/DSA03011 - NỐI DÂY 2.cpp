#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define mod 1000000007

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
    priority_queue<ll,vector<ll>,greater<ll>> q;
    cin >> n;
    ll x;
    FOR(i,0,n) 
    {
        cin >> x; q.push(x);
    }
    ll ans = 0;
    ll x1, x2;
    while(q.size() > 1)
    {
        x1 = q.top(); q.pop();
        x2 = q.top(); q.pop();
        ll tmp = (x1 % mod + x2 % mod) % mod;
        q.push(tmp);
        ans += tmp;
        ans %= mod;
    }
    cout << ans << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}