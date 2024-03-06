#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int n, m, k, final = 0, ans = 0;
int a[1005], b[1005];


void solve() 
{
    cin >> n;
    if(n <= 0) return;
    vector<string> a;
    a.pb("0");
    a.pb("1");

    int i, j;
    for(i = 2; i < (1 << n); i = i << 1)
    {
      for(j = i - 1; j >= 0; j--) // Dao? nguoc day~ va noi' lai. vao` day~ ban dau`
      {
        a.pb(a[j]);
      }
      for(j = 0; j < i; j++) // Ghep 0 vao first half
      {
        a[j] = "0" + a[j];
      }
      for(j = i; j < 2*i; j++) // Ghep 1 vao second half
      {
        a[j] = "1" + a[j];
      }
    }
    for(i = 0; i < a.size(); i++) cout << a[i] << ' ';
    cout << "\n";
}

int main() 
{
    int t = 1; 
    cin >> t;
    while(t--) solve();
}