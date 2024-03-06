#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n, k;
int a[30];
vector<string> ans;
vector<int> v;

void dq(int i, int sum=0){
  if(sum > k) return;
  if(sum == k){
    string tmp = "[";
    for(int j = 0; j < v.size(); j++) 
    {
        tmp += to_string(v[j]);
        if(j != v.size() - 1) tmp += " "; 
    }
    tmp += "]";
    ans.push_back(tmp);
    return;
  }
  for(int j=i; j < n; j++){
    v.push_back(a[j]);
    dq(j+1, sum + a[j]);
    v.pop_back();
  }
}

void solve() 
{
    ans.clear();
    v.clear();
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    dq(0,0);
    if(ans.size()) 
    {
        for(string x : ans) cout << x << ' ';
        cout << "\n";
    }
    else cout << "-1\n";
}

int main() 
{
    int t; cin >> t;
    while(t--) solve();
}