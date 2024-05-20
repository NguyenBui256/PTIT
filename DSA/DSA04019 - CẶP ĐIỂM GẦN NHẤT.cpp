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
#define all(a) a.begin(), a.end()

int n;

double dist(pair<double,double> a, pair<double,double> b){
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

void solve(){
    cin >> n;
    vector<pair<double,double>> a(n), b(n);
    FOR(i,0,n){
         cin >> a[i].fi >> a[i].se;
         b[i].fi = a[i].se;
         b[i].se = a[i].fi;
    }
    sort(all(a)); sort(all(b));
    double ans = 1e9;
    FOR(i,0,n){
        ans = min(ans, min(dist(a[i],a[i+1]), dist(b[i],b[i+1])));
    }
    cout << fixed << setprecision(6) << ans << "\n";

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