#include<bits/stdc++.h>
using namespace std;

int k, n, a[100], final = 0;

void init() 
{
	for(int i = 1; i <= k; i++) 
	{
		a[i] = i;
	}
}

void sinh() 
{
	int i = k; // duyet tu cuoi'
	while(i >= 1 && a[i] == n - k + i)
	{
		i--;
	}
	if(i == 0) 
	{
		final = 1;
	}
	else
	{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
		{
			a[j] = a[j-1] + 1;
		}
	}
}

int main() 
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		final = 0;
		cin >> n >> k;
		init();
		while(!final)
		{
			for(int i = 1; i <= k; i++) 
			{
				cout << a[i];
			}
			cout << ' ';
			sinh();
		}
		cout << "\n";
	}
}