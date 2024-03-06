#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

// int n, k, ans = 0;
int x[15];
int doc[15], xuoi[35], nguoc[35];
vector<string> ans;
vector<int> v;

bool check(vector<int> v)
{
  return (!(v[0] == 0 && v[1] == 0) && (v[2] == 0 && v[3] == 2) && v[4] == 2);
}

void dq(int i){
    for(int j = 0; j <= 2; j += 2) 
    {
      v.push_back(j);
      if(i == 8)
      {
        // for(int x : v) cout << x << " ";
        // cout << "\n";
        if(check(v)) 
        {
          string tmp = "";
          for(int j = 0; j < 8; j++)
          {
            tmp += to_string(v[j]);
            if(j == 1 || j == 3) tmp += "/";
          }
          ans.push_back(tmp);
        }
      }
      else dq(i + 1);
      v.pop_back();
    }
}

void solve() 
{
    dq(1);
    sort(ans.begin(), ans.end());
    for(string x : ans) cout << x << "\n";
}

int main() 
{
    // int t; 
    // cin >> t;
    solve();
    // while(t--) solve();
}