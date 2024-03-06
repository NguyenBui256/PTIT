#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int n, final = 0, ans = 0;
int a[1000];

void ql(int i, int sum)
{
    if(sum > ans - sum || final) return;

    if(2 * sum == ans) 
    {
        final = 1;
        return;
    }
    if(i < n)
    {
        if(2 * sum <= ans) ql(i+1, sum + a[i]);
        ql(i+1,sum);
    }

}

void solve() 
{
    final = 0;
    ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        ans += a[i];
    }
    if(ans % 2 == 0) ql(0, 0);
    if(final) cout << "YES\n";
    else cout << "NO\n";
}


int main() 
{
    int T;
    cin >> T;
    while(T--) solve();
}