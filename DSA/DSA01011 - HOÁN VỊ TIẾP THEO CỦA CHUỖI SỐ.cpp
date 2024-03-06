#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, m, k, final = 0;
int a[1005];

void sinh() 
{
  int i = n - 1;
  while(a[i] >= a[i+1] && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    int j = n;
    while(a[i] >= a[j]) j--;
    swap(a[i],a[j]);
    reverse(a+i+1,a+n+1);
  }
}

void solve() 
{
    cin >> m;
    string s; cin >> s;
    n = s.size();
    FOR(i,1,n+1)
    {
      a[i] = s[i - 1] - '0';
    }
    cout << m << ' ';
    int ok = 0;
    FOR(i,1,n)
    {
      if(a[i] < a[i+1])
      {
        ok = 1;
        break;
      }
    }
    if(ok)
    {
      sinh();
      FOR(i,1,n+1) cout << a[i];
      cout << "\n";
    }
    else
    {
      cout << "BIGGEST\n";
    }
}

int main() 
{
    int t; 
    cin >> t;
    while(t--) solve();
}