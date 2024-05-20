#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[35];

void init(int n)
{
    FOR(i,1,n+1) a[i] = 6;
}

void sinh()
{
    int i = n;
    while(a[i] == 8 && i >= 1) 
    {
        a[i] = 6;
        i--;
    }
    if(i == 0) final = 1;
    else a[i] = 8;
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
    cin >> n;
    init(n);
    while(!final)
    {   
        if(check(a))
        {
            FOR(i,1,n+1) cout << a[i];
            cout << "\n";
        }
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