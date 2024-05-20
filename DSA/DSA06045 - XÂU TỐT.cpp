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
    int n;
    string s;
    cin >> n >> s;
    vector<int> v;
    int l = 1;
    FOR(i, 1, n)
    {
        if (s[i] == s[i - 1])
            l++;
        else
        {
            v.pb(l);
            l = 1;
        }
    }
    v.pb(l);
    ll cnt = 0;
    FOR(i, 0, v.size() - 1)
    {
        if (v[i] == 1 || v[i + 1] == 1)
            cnt += max(v[i], v[i + 1]);
        else
            cnt += v[i] + v[i + 1] - 1;
    }

    cout << 1ll * n * (n - 1) / 2 - cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    // TEST
    {
        solve();
    }
}