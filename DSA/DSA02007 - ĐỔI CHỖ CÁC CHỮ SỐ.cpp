#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k, final = 0;
int a[15][15], b[15][15];

void solve()
{
    cin >> k;
    string s; cin >> s;
    string res = s;
    int n = s.size();
    for(int i = 0; i < n - 1; i++)
    {
        if(!k) break;
        char Max = s[i];
        int idx;
        for(int j = i+1; j < n; j++)
        {
            if(s[j] >= Max)
            {
                Max = s[j];
                idx = j;
            }
        }
        if(k && Max != s[i]) 
        {
            swap(s[i],s[idx]);
            if(s.compare(res) > 0) res = s;
            k--;
        }
    }
    cout << res << '\n';
    
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}