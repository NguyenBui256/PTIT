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

string proc(string binary)
{
    string ans = "";
    ans += binary[0];

    FOR(i, 1, binary.size())
    ans += ((binary[i - 1] == binary[i]) ? '0' : '1');

    return ans;
}
void solve()
{
    string s;
    cin >> s;
    cout << proc(s) << "\n";
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