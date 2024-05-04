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

int snt[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
ll res;
int n;
void Try(int i, ll x, ll cnt)
{
	if (cnt > n) return;
	if (cnt == n) {
        res = min(res, x);
        return;
    }
	for (int j = 1;; j++)
	{
		if (x * snt[i] > res)
			break;
		x *= snt[i];
		Try(i + 1, x, cnt * (j + 1));
	}
}

void solve()
{
	cin >> n;
	res = 1e18;
	Try(0, 1, 1);
	cout << res << "\n";
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