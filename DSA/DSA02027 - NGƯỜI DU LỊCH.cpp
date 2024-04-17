#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int n, m, s;
int check[1005], C[1005][1005], X[1005];
int ans = 1e9, Min = 1e9;

void dq(int i, int sum)
{
    for(int j = 2; j <= n; j++)
    {
        if(!check[j])
        {
            X[i] = j;
            sum += C[X[i-1]][X[i]];
            check[j] = 1;
            if(i == n - 1) 
            {
                ans = min(ans, sum + C[1][X[i]]);
            }
            else if(sum + Min * (n - i + 1) <= ans) dq(i+1,sum);
            sum -= C[X[i-1]][X[i]];
            check[j] = 0;
        }
    }
}

void solve()
{
    cin >> n;
    FOR(i,1,n+1) 
    {
        FOR(j,1,n+1) 
        {
            cin >> C[i][j];
            if(C[i][j] < Min) Min = C[i][j]; 
        }
    }
    check[1] = 1;
    X[0] = 1;
    dq(1,0);
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // TEST
    {
        solve();
    }
}
