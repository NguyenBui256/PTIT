#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007
#define TEST int t;cin >> t;while(t--)

ll n, m, k, final = 0;
int a[100005];
// int b[10000005];

void solve()
{
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,n - 1)
    {
        int min_idx = i;
        FOR(j,i+1,n)
        {
            if(a[min_idx] > a[j])
            {
                min_idx = j;
            }
        }
        if(i != min_idx) swap(a[i],a[min_idx]);
        cout << "Buoc " << i + 1 << ": ";
        FOR(i,0,n) cout << a[i] << ' ';
        cout << '\n';
        if(i == min_idx) return;
    }
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}