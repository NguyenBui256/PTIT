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

void solve()
{
    int n; cin >> n; 
    int a[n] = {};
    vector<int> d1, d2;
    ll sum = 0;
    FOR(i,0,n)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i] % 3 == 1) d1.pb(a[i]);
        else if(a[i] % 3 == 2) d2.pb(a[i]);
    }
    sort(a,a+n,greater<int>());
    sort(begin(d1),end(d1));
    sort(begin(d2),end(d2));
    if(sum && sum % 3 == 0) 
    {
        for(int x : a) cout << x;
        cout << "\n";
        return;
    }
    else if(sum % 3 == 1)
    {
        if(d1.size() >= 1) 
        {
            int ok = 0, cnt = 0;
            for(int x : a) 
            {
                if(ok == 0 && x == d1[0]) 
                {
                    ok = 1;
                    continue;
                }
                cout << x;
                cnt++;
            }
            if(!cnt) cout << "-1";
            cout << "\n";
            return;
        }
        else if(d2.size() >= 2)
        {
            int ok1 = 0, ok2 = 0;
            int cnt = 0;
            for(int x : a)
            {
                if(!ok1 && x == d2[0]) 
                {
                    ok1 = 1;
                    continue;
                }
                if(!ok2 && x == d2[1])
                {
                    ok2 = 1;
                    continue;
                }
                cout << x;
                cnt++;
            }
            if(!cnt) cout << "-1";
            cout << "\n";
            return;
        }
        else cout << "-1\n";
    }
    else if(sum % 3 == 2)
    {
        if(d2.size() >= 1) 
        {
            int ok = 0,cnt = 0;
            for(int x : a) 
            {
                if(ok == 0 && x == d2[0]) 
                {
                    ok = 1;
                    continue;
                }
                cout << x;
                cnt++;
            }
            if(!cnt) cout << "-1";
            cout << "\n";
            return;
        }
        else if(d1.size() >= 2)
        {
            int ok1 = 0, ok2 = 0, cnt = 0;
            for(int x : a)
            {
                if(!ok1 && x == d1[0]) 
                {
                    ok1 = 1;
                    continue;
                }
                if(!ok2 && x == d1[1])
                {
                    ok2 = 1;
                    continue;
                }
                cout << x;
                cnt++;
            }
            if(!cnt) cout << "-1";
            cout << "\n";
            return;
        }
        else cout << "-1\n";
    }
    else cout << "-1\n";
}

int main()
{
    // fast;
    // init();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}