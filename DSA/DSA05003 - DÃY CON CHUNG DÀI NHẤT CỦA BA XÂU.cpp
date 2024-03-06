#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll F[101][101][101];
int n, m, k;
string a,b,c;

void solve()
{
    memset(F,0,sizeof(F));
    cin >> n >> m >> k;
    cin >> a >> b >> c;
    FOR(i,0,n) 
    {
        FOR(j,0,m)
        {
            FOR(z,0,k) 
            {
                if(a[i] == b[j] && b[j] == c[z]) F[i+1][j+1][z+1] = F[i][j][z] + 1;
                else F[i+1][j+1][z+1] = max(F[i+1][j+1][z], max(F[i][j+1][z+1],F[i+1][j][z+1]));
            }
        }
    }
    cout << F[n][m][k] << "\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}