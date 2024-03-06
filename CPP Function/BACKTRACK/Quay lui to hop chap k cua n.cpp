
#include<bits/stdc++.h>
using namespace std;

int k, n, a[100], final = 0;

// ham khoi tao tat ca gia tri = 0;
void init() 
{
	for(int i = 1; i <= k; i++) 
	{
		a[i] = i;
	}
}

void kq() 
{
	for(int i = 1; i <= k; i++) 
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}

void Try(int i) 
{
	for(int j = a[i-1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k) 
		{
			kq();
		}
		else
		{
			Try(i+1);
		}
	}
}

int main() 
{
	cin >> k >> n;
	Try(1);
}