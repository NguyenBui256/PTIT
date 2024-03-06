#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

ll F[10004];
int n, m, k;
string a,b,c;

void solve()
{
    cin >> n;
    cout << F[n] << "\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<ll,vector<ll>,greater<ll>> q;
    map<ll,int> mp;
    q.push(1);
    int x = 1;
    while(x < 10000)
    {
        ll tmp = q.top();
        F[x++] = tmp;
        q.pop();
        if(!mp[tmp*2]) mp[tmp*2] = 1, q.push(tmp*2);
        if(!mp[tmp*3]) mp[tmp*3] = 1, q.push(tmp*3);
        if(!mp[tmp*5]) mp[tmp*5] = 1, q.push(tmp*5);
    }
    int t = 1;
    TEST   
        solve();
}