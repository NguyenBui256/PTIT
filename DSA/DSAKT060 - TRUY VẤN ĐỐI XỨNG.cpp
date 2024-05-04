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

void solve()
{
    string s; cin >> s;
    int q; cin >> q;
    while(q--){
        char c; 
        int x, y; cin >> c >> x >> y;
        if(c == 'q'){
            string tmp = s.substr(x - 1,y-x+1);
            string tmp2 = tmp;
            reverse(all(tmp2));
            if(tmp == tmp2) cout << "YES\n";
            else cout << "NO\n";
        }else{
            s[x-1] = (char)(y + '0');
        }
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