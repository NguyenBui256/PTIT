#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int F[500001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s; cin >> n >> s;
    int a[n+1];
    F[0] = 1;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = s; j >= a[i]; j--) 
        {
            if((j-a[i] >= 0) && F[j-a[i]]) 
            {
                F[j] = 1;
            }
        }
    }
    if(F[s]) cout << 1;
    else cout << 0;
    return 0;
}