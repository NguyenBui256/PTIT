#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[30];
// int doc[15], xuoi[35], nguoc[35];
vector<string> ans;
vector<int> v;

void init() 
{
  FOR(i,1,n+1) a[i] = i;
}

bool check(int a[])
{
  for(int i = 1; i <= n - 1; i++)
  {
    if(abs(a[i] - a[i+1]) == 1) return false;
  }
  return true;
}

void sinh() 
{
  int i = n - 1;
  while(a[i] > a[i+1] && i >= 1) i--;
  if(i == 0) final = 1;
  else 
  {
    int j = n;
    while(a[i] > a[j]) j--;
    swap(a[i],a[j]);
    reverse(a+i+1,a+n+1);
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

ll MIN(string a, string b) 
{
  string tmp, tmp2;
  FOR(i,0,a.size()) 
  {
    if(a[i] == '6') tmp[i] = '5';
    else tmp[i] = a[i];
  }
  FOR(i,0,b.size())
  {
    if(b[i] == '6') tmp2[i] = '5';
    else tmp2[i] = b[i];
  }
  return stoll(tmp) + stoll(tmp2);
}

ll MAX(string a, string b)
{
  string tmp, tmp2;
  FOR(i,0,a.size()) 
  {
    if(a[i] == '5') tmp[i] = '6';
    else tmp[i] = a[i];
  }
  FOR(i,0,b.size())
  {
    if(b[i] == '5') tmp2[i] = '6';
    else tmp2[i] = b[i];
  }
  return stoll(tmp) + stoll(tmp2);
}

void solve() 
{
    string a, b; cin >> a >> b;
    cout << MIN(a,b) << ' ' << MAX(a,b);
}

int main() 
{
    int t = 1; 
    // cin >> t;
    while(t--) solve();
}