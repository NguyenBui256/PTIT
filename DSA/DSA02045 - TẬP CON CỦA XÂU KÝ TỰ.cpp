#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int Min = 1e9;
int n, k, final = 0;
// int a[1000];
vector<vector<int>> ans;
string s; 

void dq(int i, string q)
{
    for(int j = i + 1; j < s.size(); j++) 
    {
        q += s[j];
        cout << q << ' ';
        dq(j,q);
        q.pop_back();
    }
}

void solve() 
{
    cin >> n >> s;
    dq(-1, "");
    cout << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}