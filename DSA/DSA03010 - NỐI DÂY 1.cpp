#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

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

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.se != b.se) return a.se < b.se;
    return a.fi < b.fi;
}

void solve()
{
    cin >> n;
    int a[n];
    priority_queue<int, vector<int>, greater<int>> q;
    FOR(i,0,n)
    {
         cin >> a[i];
         q.push(a[i]);
    }
    // while(!q.empty()) 
    // {
    //     cout << q.top() << "\n";
    //     q.pop();
    // }
    long long ans = 0;
    while(q.size() > 1)
    {
        int tmp = q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        ans += tmp;
        q.push(tmp);
    }
    // cout << "\n";
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}