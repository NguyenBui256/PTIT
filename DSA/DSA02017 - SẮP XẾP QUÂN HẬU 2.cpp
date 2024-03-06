#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int a[100][100];
int cot[100], nguoc[100], xuoi[100];
int ans = 0;

void dq(int i, int sum)
{
    for(int j = 1; j <= 8; j++)
    {
        if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1])
        {
            cot[j] = 1; xuoi[i-j+8] = 1; nguoc[i+j-1] = 1;
            sum += a[i][j];
            if(i == 8)
            {
                ans = max(ans, sum);
            }
            else dq(i+1,sum);
            sum -= a[i][j];
            cot[j] = 0; xuoi[i-j+8] = 0; nguoc[i+j-1] = 0;
        }
    }
}


void solve()
{
    memset(cot,0,sizeof(cot)); memset(xuoi,0,sizeof(xuoi)); memset(nguoc,0,sizeof(nguoc));
    ans = 0;
    FOR(i,1,9) 
    {
        FOR(j,1,9) cin >> a[i][j]; 
    }
    dq(1,0);
    cout << ans << '\n';
}

int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}