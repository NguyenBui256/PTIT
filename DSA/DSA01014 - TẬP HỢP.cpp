#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, m, k, final = 0, ans = 0;
int a[1005], b[1005];

void init(int k)
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

void solve() 
{
    int s;
    while(cin >> n >> k >> s)
    {
      if(k > n) 
      {
        cout << "0\n";
        continue;
      }
      if(!n && !k && !s) return;
      init(k);
      ans = 0;
      final = 0;
      int sum;
      while(!final)
      {
        sum = 0;
        FOR(i,1,k+1) sum += b[i];
        if(sum == s) ans++;
        sinh();
      }
      cout << ans << "\n";
    }
}

int main() 
{
    int t = 1; 
    // cin >> t;
    while(t--) solve();
}