#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
int a[1005];
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

void solve() 
{
    int d; cin >> d;
    string s;
    cin >> s;
    map<char,int> mp;
    FOR(i,0,s.size())
    {
      mp[s[i]]++;
    }
    int ok = 1;
    int n = s.size();
    if(n % d != 0) n = n / d + 1;
    else n = n / d;
    FOR(i,0,s.size())
    {
      if(mp[s[i]] > n) 
      {
        ok = 0;
        break;
      }
      else mp[s[i]] = 0;
    }
    if(ok) cout << "1\n";
    else cout << "-1\n";
}

int main() 
{
    int t; 
    cin >> t;
    while(t--) solve();
}