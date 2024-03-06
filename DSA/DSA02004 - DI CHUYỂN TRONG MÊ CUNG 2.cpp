#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, final = 0;
int a[15][15], b[15][15];
vector<string> ans;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void dq(int i, int j, string s)
{
    if(i == n && j == n) 
    {
        ans.push_back(s);
        return;
    }
    for(int k = 0; k < 4; k++) 
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
        {
            a[i1][j1] = 0;
            if(k == 0) s += 'R';
            else if(k == 1) s += 'L';
            else if(k == 2) s += 'D';
            else s += 'U';

            dq(i1,j1,s);
            s.pop_back();
            a[i1][j1] = 1;
        }
    }
}


 
void solve()
{
    ans.clear();
    cin >> n;
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1) cin >> a[i][j];
    }
    if(a[1][1] == 1) 
    {
        a[1][1] = 0;
        dq(1,1,"");
    }
    if(ans.size())
    {
        sort(begin(ans), end(ans));
        for(string x : ans) cout << x << ' ';
        cout << "\n";
    }
    else cout << "-1\n";
    
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