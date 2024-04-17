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

int cnt[100005];

vector<int> take(int n)
{
    vector<int> u(6);
    while(n) 
    {
        u[n%10] = 1;
        n /= 10;
    }
    return u;
}

void init()
{
    queue<int> q;
    for(int i = 1; i <= 5; i++) 
    {
        q.push(i);
        cnt[i] = 1;
    }
    while(1)
    {
        int tmp = q.front();
        q.pop();
        if(tmp > 5555) break;
        vector<int> check = take(tmp);
        for(int i = 0; i <= 5; i++)
        {
            if(check[i] == 0) 
            {
                q.push(tmp * 10 + i);
                cnt[tmp * 10 + i] = 1;
            }
        }
    }
    for(int i = 1; i <= 100005; i++)
    {
        cnt[i] += cnt[i-1];
    }
}

void solve()
{
    int l, r; cin >> l >> r;
    cout << cnt[r] - cnt[l-1] << "\n";
}

int main()
{
    // fast;
    init();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}