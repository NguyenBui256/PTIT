#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, final = 0;
int a[20];

void init(int n)
{       
    FOR(i,1,n+1) a[i] = i;
}

void sinh() 
{
    int i = n - 1;
    while(a[i] > a[i+1] && i >= 1) i--;
    if(i == 0) final = 1;
    else
    {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}

void solve()
{
    string s;
    cin >> s;
    final = 0;
    n = s.size();
    init(n);
    while(!final) 
    {
        FOR(i,1,n+1) cout << s[a[i] - 1]; 
        cout << ' ';
        sinh();
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}