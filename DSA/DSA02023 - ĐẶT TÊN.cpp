#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
vector<string> v;
set<string> se;
vector<string> ans;
int a[35];

void init(int n)
{
    FOR(i,1,n+1) a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n - k + i) i--;
    if(i == 0) final = 1;
    else 
    {
        a[i]++;
        FOR(j,i+1,k+1) a[j] = a[j-1] + 1; 
    }
}

void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        se.insert(x);
    }
    for(string x : se) 
    {
        v.push_back(x);
    }
    n = se.size();
    init(n);
    while(!final)
    {
        string tmp = "";
        for(int i = 1; i <= k; i++) 
        {
            if(i == 1) tmp += v[a[i] - 1];
            else tmp += " " + v[a[i] - 1];
        }
        cout << tmp << "\n";
        sinh();
    }
    // sort(ans.begin(), ans.end());
    // for(int i = 0; i < k; i++) cout << ans[i] << '\n';
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    
}