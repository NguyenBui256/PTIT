#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
// int a[10005];
int ans = 0;

// void init(int n)
// {       
//     FOR(i,1,n+1) a[i] = 0;
// 


bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}



void solve()
{
    cin >> n;
    int a[n];
    map<int,int> mp;
    int ans = 0;
    FOR(i,0,n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    FOR(i,a[0],a[n-1]+1) 
    {
        if(!mp[i]) ans++;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}