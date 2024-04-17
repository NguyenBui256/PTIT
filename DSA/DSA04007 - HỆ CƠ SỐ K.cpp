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

int k;

string cong(string a, string b)
{
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    int du = 0;
    int n = a.size();
    for(int i = n - 1; i >= 0; i--)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + du;
        if(tmp >= k) 
        {
            du = 1;
            tmp %= k;
        }else du = 0;
        a[i] = (char)(tmp + '0');
    }
    if(du) a.insert(0,to_string(du));
    while(a[0] == '0') a.erase(0,1);
    return a;
}

void solve()
{
    string a, b;
    cin >> k >> a >> b;
    cout << cong(a,b) << "\n";

}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}