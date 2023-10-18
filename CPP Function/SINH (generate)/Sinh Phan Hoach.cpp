
#include<bits/stdc++.h>
using namespace std;

int dem, n, a[100], final = 0;

// ham khoi tao tat ca gia tri = 0;
void init() 
{
	dem = 1;
	a[1] = n;
}

void sinh() 
{
	int i = dem; // duyet tu cuoi'
	while(i >= 1 && a[i] == 1)
	{
		i--;
	}
	if(i == 0) 
	{
		final = 1;
	}
	else
	{
		int d = dem - i + 1; //luong con` thieu' sau khi bot' cua a[i] di 1 don vi.
		a[i]--;
		dem = i; 
		int q = d / a[i], r = d % a[i];
		if(q != 0) 
		{
			for(int j = 1; j <= q; j++) 
			{
				a[i + j] = a[i];
			}
			dem += q;
		}
		if(r != 0) 
		{
			a[dem+1] = r;
			dem++;
		}
	}
}

int main() 
{
	cin >> n;
	init();
	while(!final)
	{
		for(int i = 1; i <= dem; i++) 
		{
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
}