#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, ans = 0;
int x[15];
int doc[15], xuoi[35], nguoc[35];
// vector<string> ans;
// vector<int> v;

void dq(int i){
  for(int j = 1; j <= n; j++) 
  {
    if(!doc[j] && !xuoi[i - j + n - 1] && !nguoc[i + j - 2]) 
    {
      x[i] = j;
      doc[j] = 1; xuoi[i-j+n-1] = 1; nguoc[i+j-2] = 1;
      if(i == n) 
      {
        ans++;
      }
      else
      {
        dq(i+1);
      }
      doc[j] = 0; xuoi[i-j+n-1] = 0; nguoc[i+j-2] = 0;
    }
  }
}

void solve() 
{
    cin >> n; 
    ans = 0;
    memset(doc,0,sizeof(doc));
    memset(xuoi,0,sizeof(xuoi));
    memset(nguoc,0,sizeof(nguoc));
    dq(1);
    cout << ans << "\n";
}

int main() 
{
    int t; cin >> t;
    while(t--) solve();
}