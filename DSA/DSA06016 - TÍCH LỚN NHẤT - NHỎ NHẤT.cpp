#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
int a[10005];
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
    cin >> n >> m;
    int Max = -1e9, Min = 1e9;
    int x;
    FOR(i,0,n) 
    {
        cin >> x;
        if(x > Max) Max = x;
    }
    FOR(i,0,m)
    {
        cin >> x;
        if(x < Min) Min = x;
    }
    cout << 1ll * Max * Min << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}