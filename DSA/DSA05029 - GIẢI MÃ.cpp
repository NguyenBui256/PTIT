#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)
#define MOD 1000000007

int n, m, k;

void solve()
{
    string s; cin >> s;
    ll ans = 0;
    n = s.size();
    s = " " + s;
    int a[n+1] = {};
    a[0] = a[1] = 1;
    if(s[1] == '0') 
    {
        cout << 0 << "\n";
        return;
    }
    FOR(i,2,n+1)
    {
        if(s[i] == '0') 
        {
            if(s[i-1] > '2') 
            {
                a[i-1] = 0;
                break; //bang 0 va ko tao duoc chu cai nao, dung luon
            }
            a[i] = 0;
        }
        else a[i] = a[i-1];
        int k = (s[i-1] - '0') * 10 + s[i] - '0';
        if(k >= 10 && k <= 26) a[i] += a[i-2];
    }
    cout << a[n] << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    TEST   
        solve();
}