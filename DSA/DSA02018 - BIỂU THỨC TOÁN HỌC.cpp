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
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int ok = 0;
vector<int> v(5);

void Try(int i, int sum)
{
    if(ok) return;
    if(i > 4) return;
    if(i == 4){
        if(sum == 23) ok = 1;
        return;
    }
    Try(i+1,sum+v[i+1]);
    Try(i+1,sum-v[i+1]);
    Try(i+1,sum*v[i+1]);
}

void solve()
{
    ok = 0;
    FOR(i,0,5) cin >> v[i];
    sort(all(v));
    do{
        Try(0,v[0]);
    }while(next_permutation(all(v)) && !ok);
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}