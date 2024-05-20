#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[35];
vector<string> v;
set<int> se;

void init(int k)
{
    FOR(i,1,k+1) a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n - k + i && i >= 1) 
    {
        i--;
    }
    if(i == 0) final = 1;
    else 
    {
        a[i]++;
        FOR(j,i+1,k+1) a[j] = a[j-1] + 1;
    }
}

void ql(int i, int a[])
{
    if(i == n+1) return;
    int b[n-i+2];
    string ans = "[";
    for(int j = 1; j <= n - i + 1; j++) 
    {
        b[j] = a[j] + a[j+1];
        ans += to_string(b[j]);
        if(j != n - i + 1) ans += " ";
    }
    ans += "]";
    v.push_back(ans);
    ql(i+1,b);
}

void solve()
{
    cin >> n;
    int a[n+1];
    v.clear();
    string tmp = "[";
    FOR(i,1,n+1)
    {
        cin >> a[i];
        tmp += to_string(a[i]);
        if(i != n) tmp += " ";
    }
    tmp += "]";
    v.push_back(tmp);
    ql(2,a);
    
    for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << ' ';
    cout << "\n";
    // sort(ans.begin(), ans.end());
    // for(int i = 0; i < k; i++) cout << ans[i] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}