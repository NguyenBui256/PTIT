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

int n, m, s;
int a[1000005];
int ans = 1e9, Min = 1e9;

void dq(int i, int sum, int cnt)
{
    if (i == n)
	{
		if (sum == s) ans = min(ans, cnt);
		return;
	}
	if (sum > s || cnt > ans)
		return;
	dq(i + 1, sum, cnt);
	dq(i + 1, sum + a[i + 1], cnt + 1);
}

void solve()
{
    ans = 1e9;
    cin >> n >> s;
    FOR(i,1,n+1) cin >> a[i];
    sort(a+1,a+n+1,greater<int>());
    dq(0,0,0);
    if(ans == 1e9) cout << "-1\n";
    else cout << ans << "\n";
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
