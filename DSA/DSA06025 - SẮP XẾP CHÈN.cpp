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
    cout << "Buoc 0: " << a[0] << "\n";
    int key;
    FOR(i,1,n)
    {
        int ok = 0;
        key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            ok = 1;
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        cout << "Buoc " << i << ": ";
        FOR(k,0,i+1) cout << a[k] << ' ';
        cout << '\n';
        // if(!ok) return;
        
    }
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}