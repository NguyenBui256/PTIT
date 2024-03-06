#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define mod 1000000007

int n;

void solve() 
{
    vector<pair<int,int>> v;
    vector<int> check;
    cin >> n;
    v.resize(n+1);
    check.resize(n+1);
    int x;
    FOR(i,1,n+1) cin >> x >> v[i].second >> v[i].first;
    ll ans = 0, cnt = 0;
    sort(begin(v) + 1,end(v),greater<pair<int,int>>());
    FOR(i,1,n+1)
    {
        for(int j = min(n,v[i].second); j >= 1; j--)
        {
            if(!check[j])
            {
                ans += v[i].first;
                cnt++;
                check[j] = 1;
                break;
            }
        }
    }
    cout << cnt << ' ' << ans << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}