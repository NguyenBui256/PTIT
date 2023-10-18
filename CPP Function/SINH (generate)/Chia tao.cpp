#include<bits/stdc++.h>
using namespace std;

int n, a[100], final = 0;

// ham khoi tao tat ca gia tri = 0;
void init() 
{
	for(int i = 1; i <= n; i++) a[i] = 0;
} 

void sinh() 
{
	int i = n; // duyet tu cuoi'
	while(i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i == 0) 
	{
		final = 1;
	}
	else
	{
		a[i] = 1;
	}
}

int main() 
{
	cin >> n;
	int m[n+1];
	for(int i = 1; i <= n; i++) 
	{
		cin >> m[i];
	} 
	int Min = INT_MAX;
	init();
	while(!final)
	{
		long long x = 0, y = 0;
		for(int i = 1; i <= n; i++) 
		{
			if(a[i] == 1) 
			{
				x += m[i];
			}
			else
			{
				y += m[i];
			}
		}
		if(abs(x-y) < Min)
		{
			Min = abs(x-y);
		}
		sinh();
	}
	cout << Min;
}