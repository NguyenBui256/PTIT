#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[1005];

void init() 
{
    FOR(i,1,k+1) a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n - k + i && i >= 1) i--;
    if(i == 0) final = 1;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
    }
}


void solve()
{
    cin >> n >> k;
    init();
    final = 0;
    while(!final)
    {
        FOR(i,1,k+1) cout << a[i];
        cout << ' ';
        sinh();
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}