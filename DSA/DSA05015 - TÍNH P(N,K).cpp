#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

ll F[1003][1003];
int n, m, k;
string a,b,c;

void solve()
{
    cin >> n >> k;
    cout << F[n][k] << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    FOR(i,1,1001) 
    {
        F[i][0] = 1;
        F[i][i] = 1;
        FOR(j,1,1001)
        {
            if(j > i) F[i][j] = 0;
            else if(j < i)
            {
                F[i][j] = (F[i][j-1] % MOD * (i - j + 1) % MOD) % MOD;
                // cout << i << ' ' << j << ' ' << F[i][j] << ' ';
            }
            cout << "\n";
        }
    }
    int t = 1;
    TEST   
        solve();
}