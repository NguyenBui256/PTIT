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

int count(int x, int y[], int n, int a[])
{
	if (x == 0)
		return 0;
	if (x == 1)
		return a[0];
	int it = upper_bound(y, y + n, x) - y;
	int ans = n - it;
	ans += (a[0] + a[1]);
	if (x == 2)
		ans -= (a[3] + a[4]);
	if (x == 3)
		ans += a[2];
	return ans;
}

void solve(){
    int n, m;
		cin >> n >> m;
		int x[n], y[m], a[5] = {}, s = 0;
		for (int i = 0; i < n; i++)
			cin >> x[i];
		for (int i = 0; i < m; i++)
			cin >> y[i];
		for (int i = 0; i < n; i++)
		{
			if (y[i] < 5)
				a[y[i]]++;
		}
		sort(y, y + n);
		for (int i = 0; i < m; i++)
			s += count(x[i], y, n, a);
		cout << s << endl;
    
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