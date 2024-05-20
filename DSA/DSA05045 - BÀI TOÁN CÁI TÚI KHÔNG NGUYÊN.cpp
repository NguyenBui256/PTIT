#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()
#define reset(a) memset(a,0,sizeof(a))

ll MOD = 1e9 + 7;

int n, m;

void solve()
{
    cin >> n >> m;
    vector<pair<ii,double>> v;
    v.resize(n);
    FOR(i,0,n){
        cin >> v[i].fi.fi >> v[i].fi.se;
        v[i].se = 1.00 * v[i].fi.fi / v[i].fi.se;
    }
    sort(all(v),[](pair<ii,double> a, pair<ii,double> b){
        return a.se > b.se;
    });
    double max = 0;
    int weight = 0, idx =0;
    FOR(i,0,n){
        if(weight <= m){
            weight += v[i].fi.se;
            max += v[i].fi.fi;
            idx = i;
        } else break;
    }
    if(weight > m){
        max -= v[idx].se * (weight - m);
    }
    cout << fixed << setprecision(2) << max << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}