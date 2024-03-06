#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, m, k, final = 0;
int a[1005], b[1005];
// int doc[15], xuoi[35], nguoc[35];
// vector<string> ans;
// vector<int> v;

// bool check(int a[])
// {
//   for(int i = 1; i <= n - 1; i++)
//   {
//     if(abs(a[i] - a[i+1]) == 1) return false;
//   }
//   return true;
// }

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
    cin >> n >> k;
    int ok = 0;
    map<int,int> mp;
    FOR(i,1,k+1)
    {
      cin >> a[i];
      mp[a[i]]++;
      b[i] = a[i];
    }
    FORD(i,k,0) 
    {
      if(a[i] != n - k + i) 
      {
        ok = 1;
        break;
      }
    }
    if(!ok) cout << k << "\n";
    else
    {
      sinh();
      // FOR(i,1,k+1) cout << b[i] << ' ';
      // cout << "\n";
      int cnt = 0;
      FOR(i,1,k+1)
      {
        if(mp[b[i]] == 0) cnt++;
      } 
      cout << cnt << "\n";
    }
}

int main() 
{
    int t = 1; 
    cin >> t;
    while(t--) solve();
}