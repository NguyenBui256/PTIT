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
    cin >> n >> s;
    FOR(i,0,n) 
    {
        cin >> a[i];
    }
    int F[s+1] = {};
    F[0] = 1;
    FOR(i,0,n) 
    {
        FORD(j,s,a[i]-1) 
        {
            if(F[j - a[i]]) F[j] = 1;
        }
    }
    if(F[s]) cout << "YES\n";
    else cout << "NO\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}