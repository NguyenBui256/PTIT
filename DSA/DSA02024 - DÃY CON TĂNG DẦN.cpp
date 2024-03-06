#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k;
int a[30];
// int doc[15], xuoi[35], nguoc[35];
vector<string> ans;
vector<int> v;

bool check(vector<int> v)
{
  for(int i = 0; i < v.size() - 1; i++) if(v[i] >= v[i+1]) return false;
  return true; 
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
    cin >> n;
    FOR(i,0,n) cin >> a[i];
    // sort(a,a+n);
    for(int i = 2; i < n; i++) dq(1, 0, i);
    sort(ans.begin(), ans.end());
    for(string k : ans)
    {
      cout << k << "\n";
    }
}

int main() 
{
    // int t; 
    // cin >> t;
    solve();
    // while(t--) solve();
}