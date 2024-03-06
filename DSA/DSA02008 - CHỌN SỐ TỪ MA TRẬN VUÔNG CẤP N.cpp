#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k, final = 0;
int a[15][15], b[15];
vector<vector<int>> v;
int Min = 1e9;

void dq(int i, int sum, vector<int> q)
{
    for(int j = 1; j <= n; j++)
    {
        if(!b[j]) 
        {
            b[j] = 1;
            q.pb(j);
            sum += a[i][j];
            
            if(i == n && sum == k) 
            {
                v.push_back(q);
            } 
            else if(sum + Min * (n - i) <= k) dq(i+1,sum,q);

            sum -= a[i][j];
            q.pop_back();
            b[j] = 0;
        }
    }
}


void solve()
{
    cin >> n >> k;
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1)
        {
            cin >> a[i][j];
            Min = min(Min, a[i][j]);
        }
    }
    vector<int> q;
    dq(1, 0, q);
    cout << v.size() << "\n";
    for(vector<int> u : v) 
    {
        for(int x : u) cout << x << ' ';
        cout << "\n";
    }
    
}



int main() 
{
    int T = 1;
    // cin >> T;
    while(T--)
    {
        solve();
    }
}