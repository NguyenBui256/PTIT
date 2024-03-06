#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k;
int ans = 1e9;
int a[100][100];
int Min = 1e9;
int X[100];
int visited[100];

void dq(int i, int sum, int final)
{
    for(int j = 1; j <= n; j++) 
    {
        if(!visited[j])
        {
            visited[j] = 1;
            X[i] = j;
            sum += a[X[i-1]][X[i]];
            if(i == n)
            {
                ans = min(ans, sum);
            }
            else if(sum + Min * (n - i) < ans) dq(i+1,sum, final);

            visited[j] = 0; 
            sum -= a[X[i-1]][X[i]];
            
        }
    }
}       
 
void solve()
{
    ans = 1e9;
    Min = 1e9;
	cin >> n;
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1) 
        {
            cin >> a[i][j];
            if(a[i][j]) Min = min(Min, a[i][j]);
        }
    }
    // cout << Min << "\n";
    for(int i = 1; i <= n; i++)
    {
        memset(X,0,sizeof(X));
        memset(visited,0,sizeof(visited));
        X[1] = i;
        visited[i] = 1;
        dq(2,0,i);

        // cout << ans << "\n";
    }
    cout << ans << "\n";
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