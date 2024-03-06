#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

int n, k, final = 0;
int a[50][50];
vector<string> ans;

// void init(int n)
// {       
//     FOR(i,1,n+1) a[i] = 0;
// }

void dq(int i, int j, string s)
{
    if(i == n - 1 && j == n - 1) 
    {
        ans.push_back(s);
    }
    if(i + 1 < n && a[i+1][j] == 1) 
    {
        a[i+1][j] = 0;
        s += 'D';
        dq(i+1,j, s);
        a[i+1][j] = 1;
        s.pop_back();
    }
    if(j + 1 < n && a[i][j+1] == 1) 
    {
        a[i][j+1] = 0;
        s += 'R';
        dq(i,j+1,s);
        a[i][j+1] = 1;
        s.pop_back();
    }
}


void solve()
{
    ans.clear();
    cin >> n;
    FOR(i,0,n) 
    {
        FOR(j,0,n) cin >> a[i][j];
    }
    if(a[0][0] == 1) dq(0,0,"");
    if(ans.size()) 
    {
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
            if(i != ans.size() - 1) cout << ' ';
        }
        cout << "\n";
    }
    else cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    
}