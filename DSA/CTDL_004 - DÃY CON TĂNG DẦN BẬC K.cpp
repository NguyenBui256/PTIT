#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, m, k, final = 0;
int a[1005], b[1005];

void init()
{
  FOR(i,1,k+1) b[i] = i;
}

void sinh() 
{
  int i = k;
  while(b[i] == n - k + i && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    b[i]++;
    FOR(j,i+1,k+1) b[j] = b[j-1] + 1;
  }
}

bool check(int a[])
{
  FOR(i,1,k) 
  {
    if(a[b[i]] > a[b[i+1]]) return false;
  }
  return true;
}

void solve() 
{
    
    final = 0;
    cin >> n >> k;
    init();
    FOR(i,1,n+1)
    {
      cin >> a[i];
    }
    int ans = 0;
    while(!final)
    {

      if(check(a))
      {
        // FOR(i,1,k+1) cout << b[i] << ' ';
        // cout << "\n";
        ans++;
      }
      sinh();
    }
    cout << ans << "\n";
}

int main() 
{
    int t = 1; 
    // cin >> t;
    while(t--) solve();
}