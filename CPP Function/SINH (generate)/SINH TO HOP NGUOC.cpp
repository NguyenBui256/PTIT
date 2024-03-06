#include <iostream>
#include <vector>
using namespace std;

int n, k, final = 0;
int a[20];
vector<int> v;

void init() 
{
  for(int i = 1; i <= k; i++) a[i] = n - k + i;
}

void sinh() 
{
  int i = k;
  while(i >= 1 && a[i] == a[i-1] + 1) i--;
  if(i == 0) final = 1;
  else
  {
    a[i]--;
		for(int j = i + 1; j <= k; j++)
		{
			a[j] = n + j - k; 
		}
  }
}

void solve(){
  final = 0;
  cin >> n >> k;
  init();
  while(!final) 
  {
    for(int i = 1; i <= k; i++) cout << a[i] << ' ';
    cout << "\n";
    sinh();
  }
}
int main() 
{
  int t; cin >> t;
  while(t--)
  {
    solve();
  }
    
}