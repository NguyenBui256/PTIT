#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
int mod = 1e9 + 7;
ll C[1001][1001];

// tam giac To hop 
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//...
void ktao() 
{
	for(int i = 0; i <= 1000; i++) 
	{
		for(int j = 0; j < = i; j++) 
		{
			if(j == 1 || j == i) 
			{
				C[i][j] = 1;
			}
			else
			{
				C[i][j] = (C[i-1][j-1] + C[i][j-1]) % mod;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t; cin >> t;
    while(t--) 
    {
    	
	} 
    return 0;
}