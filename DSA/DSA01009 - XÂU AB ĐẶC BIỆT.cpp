#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[20];

void init(int n)
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
    int yes = 0;
    FOR(i,1,n) 
    {
        int cnt = 0;
        while(a[i] == 0 && i <= n) 
        {
            cnt++;
            i++;
        }  
        if(cnt == k) yes++;
        else if(cnt > k) return false;
    }
    return yes == 1;
}

void solve()
{
    vector<string> v;
    cin >> n >> k;
    final = 0;
    init(n);
    while(!final) 
    {
        if(check(a)) 
        {
            string tmp = "";
            char d = 'A';
            FOR(i,1,n+1) tmp += (d + a[i]);
            v.push_back(tmp);
        }
        sinh();
    }
    cout << v.size() << "\n";
    for(string z : v) cout << z << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t= 1; 
    // cin >> t;
    while(t--) solve();
    
}