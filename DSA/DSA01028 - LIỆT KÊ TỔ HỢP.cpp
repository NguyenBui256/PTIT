#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[35];
vector<int> v;
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

bool check(int a[])
{
    FOR(i,1,n-2) 
    {
        if((a[i] == a[i+1] && a[i] == 8) || (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3] && a[i] == 6)) return false;
    }
    if((a[n-2] == a[n-1] && a[n-2] == 8) || (a[n-1] == a[n] && a[n] == 8)) return false;
    return (a[1] == 8 && a[n] == 6);
}

void solve()
{
    cin >> n >> k;
    int b[n+1];
    FOR(i,1,n+1) 
    {
        cin >> b[i];
        se.insert(b[i]);
    }
    for(int x : se) 
    {
        v.push_back(x);
        // cout << x << "\n";
    }
    n = se.size();
    init(k);
    while(!final)
    {
        FOR(i,1,k+1) 
        {
            cout << v[a[i]-1] << ' ';
        }
        cout << "\n";
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