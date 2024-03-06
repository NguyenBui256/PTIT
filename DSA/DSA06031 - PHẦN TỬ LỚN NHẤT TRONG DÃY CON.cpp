#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, m, k, final = 0;
int a[100005];

//Tham khao: https://vnoi.info/wiki/algo/data-structures/deque-min-max.md
void solve()
{
    cin >> n >> k;
    FOR(i,1,n+1) cin >> a[i];
    int maxRange[n+1] = {};
    deque<int> dq;
    while(dq.size()) dq.pop_front();
    
    FOR(i,1,n+1) 
    {
        while(!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
        dq.push_back(i);
        if(dq.front() + k <= i) dq.pop_front();
        if(i >= k) maxRange[i] = a[dq.front()];
    }
    FOR(i,k,n+1) cout << maxRange[i] << ' ';
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}