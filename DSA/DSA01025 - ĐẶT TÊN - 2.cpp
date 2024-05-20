#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[35];

void init(int n)
{
    FOR(i,1,n+1) a[i] = i;
}

void sinh()
{
    int i = k;
    while(a[i] == n - k + i) i--;
    if(i == 0) final = 1;
    else 
    {
        a[i]++;
        FOR(j,i+1,k+1) a[j] = a[j-1] + 1; 
    }
}

void solve()
{
    cin >> n >> k;
    init(n);
    final = 0;
    while(!final)
    {   
        char d = 'A';
        string tmp = "";
        for(int i = 1; i <= k; i++) 
        {
            tmp += (char)(d + a[i] - 1);
        }
        cout << tmp << "\n";
        sinh();
    }
    // sort(ans.begin(), ans.end());
    // for(int i = 0; i < k; i++) cout << ans[i] << '\n';
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}