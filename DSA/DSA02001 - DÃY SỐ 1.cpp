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

void ql(int i, int a[])
{
    if(i == n+1) return;
    int b[n-i+2];
    cout << "[";
    for(int j = 1; j <= n - i + 1; j++) 
    {
        b[j] = a[j] + a[j+1];
        cout << b[j];
        if(j != n - i + 1) cout << " ";
    }
    cout << "]\n";
    ql(i+1,b);
}

void solve()
{
    cin >> n;
    int a[n+1];
    cout << "[";
    FOR(i,1,n+1) 
    {
        cin >> a[i];
        cout << a[i];
        if(i != n) cout << " ";
    }
    cout << "]\n";
    ql(2,a);
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