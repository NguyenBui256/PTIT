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

int ans = 0;
int n, k, s;
int a[100000];

void Try(int i, int cnt)
{
    if (i == n && cnt == k)
    {
        ans++;
        return;
    }

    int res = 0;
    FOR(j, i, n)
    {
        res += a[j];
        if (res == s)
            Try(j + 1, cnt + 1);
    }
}

void solve()
{
    ans = 0;
    cin >> n >> k;
    int sum = 0;
    FOR(i,0,n) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k != 0) cout << "0";
    else
    {
        s = sum / k;
        Try(0,0);
        cout << ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}