#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

char n;
int m, k, final = 0;
int a[30];
// int doc[15], xuoi[35], nguoc[35];
vector<string> ans;
vector<int> v;

void init() 
{
  FOR(i,1,k+1) a[i] = 1;
}

bool check(vector<int> v)
{
  for(int i = 0; i < v.size() - 1; i++) if(v[i] >= v[i+1]) return false;
  return true; 
}

void sinh() 
{
  int i = k;
  while(a[i] == m && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    a[i]++;
    FOR(j,i+1,k+1) a[j] = a[j-1];
  }
}

void dq(int i, int bd, int sl){
  for(int j = bd; j < n; j++) 
  {
      v.push_back(a[j]);
      if(i == sl && check(v)) 
      {
        string tmp = "";
        for(int k = 0; k < v.size(); k++) 
        {
          tmp += to_string(v[k]);
          if(k != v.size() - 1) tmp += " ";
        }
        ans.push_back(tmp);
      }
      else dq(i+1, j+1, sl);
      v.pop_back();
    }
}

void solve() 
{
    cin >> n >> k;
    init();
    m = n - 'A' + 1;
    while(!final) 
    {
      FOR(i,1,k+1) cout << (char)(a[i] + 'A' - 1);
      cout << "\n";
      sinh();
    }
}

int main() 
{
    // int t; 
    // cin >> t;
    solve();
    // while(t--) solve();
}