#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[1005];

void init() 
{
    FOR(i,1,n+1) a[i] = 0;
}

void sinh()
{
    
}

bool check(int a[])
{
    FOR(i,1,n+1) 
    {
        if(a[i] == a[i+1] && a[i]) return false;
    }
    return a[1] == 1 && a[n] == 0;
}


void solve()
{
    string s;
    cin >> s;
    int n = s.size() - 1;
    int i = n;
    while(s[i] == '0' && i >= 0) 
    {
        s[i] = '1';
        i--;
    } 
    if(i != -1) s[i] = '0';
    cout << s << "\n";

    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}