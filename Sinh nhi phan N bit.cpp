#include<bits/stdc++.h>
using namespace std;

int n, a[100];

// ham khoi tao tat ca gia tri = 0;
void init() 
{
	for(int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

bool check()
{
	for(int i = 1; i <= n; i++) 
	{
		if(a[i] == 0) //neu con` gap gia tri 0 nghia la chua phai cau hinh cuoi' (VD: 111)
		{
			return false;
		}
	}
	return true;
}

void sinh() 
{
	int i = n; // duyet tu cuoi'
	while(i >= 1 && a[i] == 1) // tim ra vi tri dau` tien == 0; (cac so 1 ben phai so 0 nay) chuyen thanh 0
	{
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}

int main() 
{
	cin >> n;
	init();
	while(!check())
	{
		for(int i = 1; i <= n; i++) 
		{
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	for(int i = 1; i <= n; i++)  //in ra cau hinh cuoi cung
	{
		cout << a[i];
	}
}