DSA02013 - SỐ NGUYÊN TỐ#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, k, s, final = 0;
int a[100];
vector<vector<int>> v;
int Min = 1e9;

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
    return n > 1;
}

void dq(int i, int bd, int sum, vector<int> q)
{
    if(i == n && sum == s) 
    {
        v.push_back(q);
        return;
    }
    for(int j = bd + 1; j <= s; j++)
    {
        if(nt(j))
        {
            sum += j;
            q.push_back(j);
            if(sum <= s) dq(i+1,j,sum,q);
            sum -= j;
            q.pop_back();
        }
    }
}


void solve()
{
    v.clear();
    cin >> n >> k >> s;
    vector<int> q;
    dq(0,k,0,q);
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(vector<int> u : v) 
    {
        for(int x : u) cout << x << ' ';
        cout << "\n";
    }
    // cout << "\n";
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}