#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

void solve()
{   
    int t ,tmp;
    cin >> t;
    vector<vector<int>> v(t + 1);
    cin.ignore();
    string s;
    for(int i = 1; i <= t; ++i)
    {
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s)
        {
            tmp = stoi(s);
            v[i].pb(tmp);
        }
    }
    for(int i = 1; i <= t; ++i)
    {
        sort(begin(v[i]),end(v[i]));
        for(int j : v[i]) if(j > i) cout << i << ' ' << j << endl;
    }
}



int main() 
{
    int t = 1;
    // TEST 
    {
        solve();
    }
}