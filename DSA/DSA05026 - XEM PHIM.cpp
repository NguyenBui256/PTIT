#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
int a[100005];
// int b[10000005];

void solve()
{
    int s;
    cin >> s >> n;
    int tong = 0;
    FOR(i,0,n) 
    {
        cin >> a[i];
        tong += a[i];
    }
    int F[tong+1] = {};
    F[0] = 1;
    FOR(i,0,n) 
    {
        FORD(j,tong,a[i]-1) 
        {
            if(F[j - a[i]]) F[j] = 1;
        }
    }
    FORD(i,s,-1) 
    {
        if(F[i]) 
        {
            cout << i << "\n";
            return;
        }
    }
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t = 1;
    // cin >> t;
    while(t--) solve();
}