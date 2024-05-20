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
    int i = n;
    while(a[i] == 1 && i >= 1) 
    {
        a[i] = 0;
        i--;
    } 
    if(i == 0) final = 1;
    else a[i] = 1;
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
    cin >> n;
    init();
    final = 0;
    while(!final)
    {
        if(check(a))
        {
            FOR(i,1,n+1) 
            {
                if(a[i]) cout << "H";
                else cout << "A";
            }
            cout << '\n';
        }
        
        sinh();
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}