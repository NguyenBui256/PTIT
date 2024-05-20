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
  FOR(i,1,m+1) a[i] = i;
}

bool check(int a[])
{
  for(int i = 2; i < m; i++) 
  {
    if(a[i] == 1 || a[i] == 5)  
    {
      if(a[i-1] != 1 && a[i-1] != 5 && a[i+1] != 1 && a[i+1] != 5) return false;
    } 
  }
  return true;
}

void sinh() 
{
  int i = m - 1;
  while(a[i] > a[i+1] && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    int j = m;
    while(a[i] > a[j]) j--;
    swap(a[i],a[j]);
    reverse(a+i+1,a+m+1);
  }
}

// void dq(int i, int bd, int sl){
//   for(int j = bd; j < n; j++) 
//   {
//       v.push_back(a[j]);
//       if(i == sl && check(v)) 
//       {
//         string tmp = "";
//         for(int k = 0; k < v.size(); k++) 
//         {
//           tmp += to_string(v[k]);
//           if(k != v.size() - 1) tmp += " ";
//         }
//         ans.push_back(tmp);
//       }
//       else dq(i+1, j+1, sl);
//       v.pop_back();
//     }
// }

void solve() 
{
    cin >> n;
    m = n - 'A' + 1;
    init();
    while(!final) 
    {
      if(check(a))
      {
        FOR(i,1,m+1) cout << (char)(a[i] + 'A' - 1);
        cout << "\n";
      }
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