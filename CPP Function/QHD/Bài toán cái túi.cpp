#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int F[1005][1005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, V; cin >> n >> V;
    int w[n+1], v[n+1];
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= V; j++) 
        {
            F[i][j] = F[i-1][j];
            if(j >= w[i])
            {
                F[i][j] = max(F[i][j], F[i-1][j-w[i]]+v[i]);
            }
        }
    }
    cout << F[n][V];
    return 0;
}