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
int a[1000];
vector<vector<int>> ans;

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
    return n > 1;
}

void dq(int i, int sum, vector<int> v)
{
    for(int j = i + 1; j < n; j++)
    {
        sum += a[j];
        v.push_back(a[j]);
        if(nt(sum)) ans.pb(v);
        dq(j,sum,v);
        sum -= a[j];
        v.pop_back();
    }
}

void solve() 
{
    ans.clear();
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n,greater<int>());
    vector<int> v;
    dq(-1,0,v);
    sort(begin(ans), end(ans));
    for(vector<int> u : ans)
    {
        for(int x : u) cout << x << ' ';
        cout << "\n";
    }
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}