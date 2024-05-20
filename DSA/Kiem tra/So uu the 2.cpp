#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

map<string,int> mp;

bool cmp(string a, string b)
{
    if(a.size() != b.size()) return a.size() < b.size();
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i]) return a[i] < b[i];
    }
}

void solve()
{
    int n;
    cin >> n;
    queue <pair<string,int>> q;
    q.push({"1",0});
    q.push({"2",1});
    int cnt = 0;
    while (cnt < n)
    {
        auto front = q.front();
        q.pop();
        string tmp = front.first;
        int k = front.second;
        if(k > tmp.size() / 2){
            cout << tmp << ' ';
            cnt++;
        } 
        
        q.push({tmp + "0",k});
        q.push({tmp + "1",k});
        q.push({tmp + "2",k+1});
    }
    cout << "\n";
}

int main()
{
    // fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}