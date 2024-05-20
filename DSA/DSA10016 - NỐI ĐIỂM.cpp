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

struct edge{
    int u,v;
    double w;
};

vector<edge> canh;
vector<int> ke[105];
int vst[105];
int n, m;

double kc(pair<double,double> a, pair<double,double> b){
    return sqrt((a.fi-b.fi)*(a.fi-b.fi) + (a.se-b.se)*(a.se-b.se)); 
}

bool cmp(edge a, edge b) {
    return a.w < b.w;
}

void DFS(int u){
    vst[u] = 1;
    for(int v : ke[u]){
        if(!vst[v]) DFS(v);
    }
}

void solve()
{
    FOR(i,1,105) ke[i].clear();
    canh.clear();
    reset(vst);
    cin >> n;
    vector<pair<double,double>> diem(n);
    FOR(i,0,n){
        cin >> diem[i].fi >> diem[i].se;
    }
    FOR(i,0,n){
        FOR(j,0,n){
            canh.pb({i+1,j+1,kc(diem[i],diem[j])});
        }
    }
    sort(all(canh),cmp);

    double ans = 0;
    for(edge x : canh){
        reset(vst);
        DFS(x.u);
        if(!vst[x.v]){
            ans += x.w;
            ke[x.u].pb(x.v);
            ke[x.v].pb(x.u);
        }
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