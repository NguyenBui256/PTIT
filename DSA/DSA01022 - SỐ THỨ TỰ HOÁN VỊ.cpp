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
    FOR(i,1,n+1) a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while(a[i] > a[i+1]) i--;
    if(i == 0) final = 1;
    else 
    {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

bool check(int a[], int b[])
{
    FOR(i,1,n+1) 
    {
        if(a[i] != b[i]) return false;
    }
    return true;
}


void solve()
{
    cin >> n;
    init();
    int b[n+1];
    final = 0;
    FOR(i,1,n+1) 
    {
        cin >> b[i];
    }
    int cnt = 1;
    while(!final) 
    {
        if(check(a,b))
        {
            cout << cnt << "\n";
            return;
        }
        sinh();
        cnt++;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}