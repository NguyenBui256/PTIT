#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second

int n, k, final = 0;
// int a[1005];
// int doc[15], xuoi[35], nguoc[35];
vector<string> ans;
vector<int> v;

// void init() 
// {
//   FOR(i,1,n+1) a[i] = i;
// }

// bool check(int a[])
// {
//   for(int i = 1; i <= n - 1; i++)
//   {
//     if(abs(a[i] - a[i+1]) == 1) return false;
//   }
//   return true;
// }

// void sinh() 
// {
//   int i = n - 1;
//   while(a[i] > a[i+1] && i >= 1) i--;
//   if(i == 0) final = 1;
//   else 
//   {
//     int j = n;
//     while(a[i] > a[j]) j--;
//     swap(a[i],a[j]);
//     reverse(a+i+1,a+n+1);
//   }
// }

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

int a[10] = {1,2,5,10,20,50,100,200,500,1000};

void solve() 
{
    cin >> n;
    int ans = 0;
    int i = 0;
    while(n)
    {
      ans += n / a[i];
      n %= a[i];
      i++;
    }
    cout << ans << '\n';
}

int main() 
{
    reverse(a,a+10);
    int t; 
    cin >> t;
    while(t--) solve();
}