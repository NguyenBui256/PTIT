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

ll MOD = 1e15 + 7;

ll ans[5] = {1,3,6,12,23};

struct matrix
{
	ll f[4][4] = {
		{1, 0, 0, 0},
		{0, 1, 1, 0},
		{1, 1, 0, 1},
		{0, 1, 0, 0}
    };
};

ll tich(ll a, ll b){
    if(b <= 1) return (a % MOD) * b;
    ll tmp = tich(a,b/2) % MOD;
    if(b&1) return tmp+tmp+a%MOD;
    return tmp + tmp;
}

matrix tichmatran(matrix a, matrix b){
    matrix c;
    FOR(i,0,4){
        FOR(j,0,4){
            c.f[i][j] = 0;
            FOR(k,0,4) c.f[i][j] = (c.f[i][j] + tich(a.f[i][k],b.f[k][j])) % MOD;
        }
    }
    return c;
}

matrix binpow(matrix a, ll b){
    if(b == 1) return a;
    matrix tmp = binpow(a,b/2);
    matrix ans = tichmatran(tmp,tmp);
    if(b % 2) return tichmatran(ans,a);
    return ans;
}

ll Tribonacci(ll n){
    if(n <= 5) return ans[n-1];
    matrix X; 
    matrix S = binpow(X,n+2);
    return S.f[2][0] - 1;
}

void solve()
{
    ll n; cin >> n;
    cout << Tribonacci(n) << "\n";
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