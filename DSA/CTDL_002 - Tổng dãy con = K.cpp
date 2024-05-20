#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
vector<int> v;
vector<vector<int>> ans;

void dq(int i, int sum)
{   
    if(sum == k) ans.push_back(v);
    for(int j = i; j < n; j++) 
    {
        v.push_back(a[j]);
        if(sum + a[j] <= k) dq(j + 1, sum + a[j]);
        v.pop_back();
    }
}   


void solve()
{
   cin >> n >> k;
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a,a+n);
   dq(0,0);
   sort(ans.begin(), ans.end(), greater<vector<int>>());
   for(vector<int> v : ans) 
   {
        for(int x : v) cout << x << ' ';
        cout << "\n";
   }
   cout << ans.size();
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t = 1; 
    // cin >> t;
    while(t--) solve();
    
}