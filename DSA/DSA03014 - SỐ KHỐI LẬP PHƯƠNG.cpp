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

vector<ll> v(100003, 0);

ll binpow(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll res = binpow(a, b/2);
    if(b % 2 == 0) return res * res;
    return res * res * a;
}

void init(){
    for(long long i = 1; i <= 100000; i++){
        v[i] = i*i*i;
    }
}

bool check(ll a, ll b){
    string s1 = to_string(a);
    string s2 = to_string(b);
    if(s2.size() < s1.size()) return false;
    int l = 0, r = 0;
    while(l < s1.size() && r < s2.size()){
        if(s1[l] == s2[r]){
            l++;
            r++;
        }
        else r++;
    }
    return l == s1.size();
}


void solve(){
    ll n; cin >> n;
    FORD(i,100000,0){
        if(check(v[i],n)){
            cout << v[i] << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}