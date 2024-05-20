#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, final = 0;
int a[1005];

void init() 
{
    FOR(i,1,n+1) a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while(a[i] < a[i+1]) i--;
    if(i == 0) final = 1;
    else {
        int j = n;
        while(a[j] > a[i]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}


void solve()
{
    cin >> n;
    init();
    do{
        FOR(i,1,n+1) cout << a[i];
        cout << ' ';
    }
    while(next_permutation(a+1,a+n+1));
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}