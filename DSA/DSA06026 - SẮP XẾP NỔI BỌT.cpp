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
        int ok = 0;
        FOR(j,0,n-i-1)
        {
            if(a[j] > a[j+1]) 
            {
                ok = 1;
                swap(a[j], a[j+1]);
            }
        }
        if(!ok) return;
        cout << "Buoc " << i + 1 << ": ";
        FOR(i,0,n) cout << a[i] << ' ';
        cout << '\n';
        
    }
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}