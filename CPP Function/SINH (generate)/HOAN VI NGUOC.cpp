#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, k, a[100], final = 0;
void init() {
    int r = 1;
    for(int i = n - k + 1; i <= n; i++)
    {
        a[r] = i;
        r++;
    }
}

void sinh() 
{
    int i = 1; 
    while(i <= k && a[i] == a[i-1] + 1)
    {
        i--;
    }
    if(i == k + 1) 
    {
        final = 1;
    }
    else
    {
        a[i]--;
        for(int j = i + 1; j <= k; j++) 
        {
            a[j] = n - k + j;
        }
    }
}

bool check(int a[], int b[], int k)
{
    for(int i = 1; i <= k; i++) 
    {
        if(a[i] != b[i]) return false;  
    }
    return true;
}

int main() {
    cin >> n >> k;
    int b[k+1];
    init();
    int x = 1;
    while(!final) 
    {    
    	for(int i = 1; i <= k; i++) 
    	{
    		cout << a[i] << ' ';
		}
        
    }
    cout << x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
