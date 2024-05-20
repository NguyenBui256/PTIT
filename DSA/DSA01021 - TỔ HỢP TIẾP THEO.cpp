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
    FOR(i,1,n+1) a[i] = 0;
}

void sinh()
{
    
}

bool check(int a[])
{
    FOR(i,1,n+1) 
    {
        if(a[i] == a[i+1] && a[i]) return false;
    }
    return a[1] == 1 && a[n] == 0;
}


void solve()
{
    cin >> n >> k;
    int b[k+1];
    map<int,int> mp;
    FOR(i,1,k+1) 
    {
        cin >> a[i];
        mp[a[i]]++;
        b[i] = a[i];
    }
    int i = k;
    while(b[i] == n - k + i && i >= 1) i--;
    if(i == 0)
    {
        cout << k << "\n";
        return;
    }
    else
    {
        b[i]++;
        for(int j = i + 1; j <= k; j++) b[j] = b[j-1] + 1;
        int cnt = 0;
        for(int i = 1; i <= k; i++) 
        {
            if(mp[b[i]] == 0) cnt++;
        }
        cout << cnt << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}