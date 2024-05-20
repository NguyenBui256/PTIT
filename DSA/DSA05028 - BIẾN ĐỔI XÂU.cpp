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

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;

	int a = s1.size(), b = s2.size();

	int dp[a + 1][b + 1];
	memset(dp,0,sizeof(dp));

	FOR(i, 0, a + 1)
	dp[i][0] = i;
	FOR(i, 0, b + 1)
	dp[0][i] = i;

	FOR(i, 1, a + 1)
	FOR(j, 1, b + 1)
	{
		if (s1[i - 1] == s2[j - 1])
			dp[i][j] = dp[i - 1][j - 1];
		else
			dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
	}
	cout << dp[a][b] << "\n";
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