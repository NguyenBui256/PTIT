#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, m, k, final = 0, ans = 0;
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

void init(int k)
{
  FOR(i,1,k+1) b[i] = i;
}

void sinh() 
{
  int i = k;
  while(b[i] == i && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    b[i]--;
    FOR(j,i+1,k+1) b[j] = b[j-1] + 1;
  }
}

// bool check(int a[])
// {
//   FOR(i,1,k)
//   {
//     if(a[b[i]] > a[b[i+1]]) return false;
//   }
//   return true;
// }

void solve() 
{
    cin >> n >> k;
    int ok = 1;
    for(int i = 1; i <= k; i++)
    {
      cin >> a[i];
    }
    int x = 1;
    for(int i = 1; i <= k; i++)
    {
      if(a[i] != x) ok = 0;
      x++;
    }
    if(ok) 
    {
      for(int i = n - k + 1; i <= n; i++) cout << i << ' ';
      cout << "\n";
      return;
    }
    else
    {
      for(int i = k; i >= 1; i--)
      {
        if(a[i] != a[i-1] + 1)
        {
          a[i]--;
          break;
        }
        else
        {
          while(a[i] != a[i-1] + 1 && i > 1)
          {
            i--;
          }
          a[i]--;
          for(int j = i; j <= k; j++)
          {
            a[j] = n + j - k; 
          }
        }
      }
    }
    for(int i = 1; i <= k; i++) cout << a[i] << ' ';
    cout << "\n";     
}

int main() 
{
    int t = 1; 
    cin >> t;
    while(t--) solve();
}