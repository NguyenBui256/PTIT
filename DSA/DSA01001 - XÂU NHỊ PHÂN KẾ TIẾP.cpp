#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n;
int a[25][25];
vector<int> v;
vector<vector<int>> ans;



void solve()
{
    string s; cin >> s;
    int i = s.size() - 1;
    while(s[i] == '1' && i >= 0) 
    {
        s[i] = '0';
        i--;
    }
    if(i != -1) s[i] = '1';
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}