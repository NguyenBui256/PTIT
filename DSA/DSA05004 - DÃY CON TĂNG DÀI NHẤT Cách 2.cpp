#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int n;
int a[200005], b[200005], ma;

void solve()
{
    cin >> n;
    FOR(i,1,n+1) cin >> a[i];
    FOR(i,1,n+1){
        int j = lower_bound(b+1,b+ma+1,a[i]) - b - 1;
        b[j+1] = a[i];
        ma = max(j+1,ma);
    }
    cout << ma << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // TEST
    {
        solve();
    }
}