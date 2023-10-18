#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n+1];
    int f[n+1];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) 
    {
        f[i] = 1; // do dai` 1 phan tu
        for(int j = 0; j < i; j++) // duyet tu dau` den i
        {
            if(a[j] < a[i])
            {
                f[i] = max(f[i], f[j] + 1); // dc phep them phan tu a[i] vao day~
            }
        }
    }
    cout << *max_element(f,f+n);
    return 0;
}