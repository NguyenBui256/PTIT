#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k, final = 0;
int a[100];
vector<vector<int>> v;
int Min = 1e9;

void dq(int i, int sum, vector<int> q)
{
    if(sum == k) 
    {
        v.push_back(q);
        return;
    }
    for(int j = i; j <= n; j++)
    {
        sum += a[j];
        q.push_back(a[j]);
        if(sum <= k) dq(j,sum,q);
        sum -= a[j];
        q.pop_back();
    }
}


void solve()
{
    v.clear();
    cin >> n >> k;
    FOR(i,1,n+1)
    {
        cin >> a[i];
        Min = min(Min, a[i]);
    }
    vector<int> q;
    dq(1, 0, q);
    // cout << v.size() << "\n";
    if(v.size())
    {
        sort(v.begin(), v.end());
        for(vector<int> u : v) 
        {
            cout << "[";
            for(int j = 0; j < u.size(); j++) 
            {
                cout << u[j];
                if(j < u.size() - 1) cout << ' ';
            }
            cout << "]";
        }
    }
    else cout << "-1";
    cout << "\n";
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}