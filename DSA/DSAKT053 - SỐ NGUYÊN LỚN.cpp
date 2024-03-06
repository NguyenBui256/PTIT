#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// int a[100005];
// int b[10000005];

void solve()
{
    string s,t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int F[n+1][m+1];
    memset(F,0,sizeof(F));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            F[i][j] = max(F[i-1][j], F[i][j-1]);
            if(s[i-1] == t[j-1]) F[i][j] = max(F[i][j], F[i-1][j-1] + 1);
        }
    }
    cout << F[n][m] << "\n";
} 
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    while(t--) solve();
}