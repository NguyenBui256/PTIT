
#include<bits/stdc++.h>
using namespace std;

int n, a[100], final = 0;
bool used[10001];

void kq() 
{
	for(int i = 1; i <= n; i++) 
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}

void Try(int i) 
{
	for(int j = i; j <= n; j++) // in nguoc thi duyet j tu n -> 1;
	{
		if(used[j] == false)
		{
			a[i] = j;
			used[j] = true;
			if(i == n) 
			{
				kq();
			}
			else
			{
				Try(i+1);
			}
			used[j] = false;
		}	
	}
}

int main() 
{
	cin >> n;
	memset(used, false, sizeof(used));
	Try(1);
}