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

void dq(int i, int sum, vector<int> v)
{
    for(int j = i; j <= n; j++)
    {
        sum += j;
        v.push_back(j);
        if(sum == n) 
        {
            reverse(begin(v),end(v));
            ans.pb(v);
        }
        else if(sum < n) dq(j,sum,v);
        sum -= j;
        v.pop_back();
    }
}

void solve() 
{
    ans.clear();
    cin >> n;
    vector<int> v;
    dq(1,0,v);
    cout << ans.size() << "\n"; 
    sort(begin(ans), end(ans), greater<vector<int>>());
    for(vector<int> u : ans)
    {
        cout << "(";
        for(int i = 0; i < u.size(); i++) 
        {
            cout << u[i];
            if(i != u.size() - 1) cout << ' ';
        }
        cout << ") ";
    }
    cout << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}