#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int Min = 1e9;
int n, k, final = 0;
// int a[1000];
vector<vector<int>> ans;

void dq(int x, int cnt)
{
    if(x < 1) return;
    if(x == 1) 
    {
        Min = min(Min, cnt);
        return;
    }
    if(x % 2 == 0 && cnt < Min) dq(x / 2, cnt + 1);
    if(x % 3 == 0 && cnt < Min) dq(x / 3, cnt + 1);
    if(cnt < Min) dq(x - 1, cnt + 1);
}

void solve() 
{
    Min = 1e9;
    cin >> n;
    dq(n, 0);
    cout << Min << "\n";
}


int main() 
{
    int T = 1;
    cin >> T;
    while(T--) solve();
}