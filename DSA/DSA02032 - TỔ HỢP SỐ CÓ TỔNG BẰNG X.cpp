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
    for(int j = i; j < n; j++)
    {
        sum += a[j];
        v.push_back(a[j]);
        if(sum == k) 
        {
            ans.pb(v);
        }
        else if(sum + Min <= k) dq(j,sum,v);
        sum -= a[j];
        v.pop_back();
    }
}

void solve() 
{
    ans.clear();
    cin >> n >> k;
    FOR(i,0,n)
    {
         cin >> a[i];
         Min = min(Min, a[i]);
    }
    sort(a,a+n);
    vector<int> v;
    dq(0,0,v);
    if(ans.size())
    {
        cout << ans.size() << ' ';
        for(vector<int> x :ans) 
        {
            cout << "{";
            for(int i = 0; i < x.size(); i++)
            {
                cout << x[i];
                if(i != x.size() - 1) cout << ' ';
            }
            cout << "} ";
        }
        cout << "\n";
    }else cout << "-1\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}