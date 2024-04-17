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
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

void solve()
{
    int n, k; cin >> n >> k;
    vs v(n);
    FOR(i,0,n) cin >> v[i];

    vi a(k);
    string Max = "", Min = "";
    FOR(i,0,k) {
        a[i] = i;
        Max += '0';
        Min += '9';
    }
    
    int ans = pow(10,k);

    do{
        string tmp = "";
        string ma = Max, mi = Min;
        for(string i : v)
        {
            tmp = "";
            for(int j : a) tmp += i[j];
            ma = max(ma,tmp);
            mi = min(mi,tmp);
        }
        ans = min(ans, stoi(ma) - stoi(mi));
    }while(next_permutation(all(a)));
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // init();
    int t = 1;
    // TEST
    {
        solve();
    }
}