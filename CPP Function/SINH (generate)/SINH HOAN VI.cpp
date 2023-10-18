#include <bits/stdc++.h>
using namespace std;
 
int n, a[100], final = 0;
void init() 
{
    for(int i = 1; i <= n; i++) 
    {
        a[i] = i;
    }
}
 
void sinh() 
{
    int i = n-1; 
    while(i >= 1 && a[i] > a[i+1])
    {
        i--;
    }
    if(i == 0) 
    {
        final = 1;
    }
    else
    {
    	int j = n;
	    while(a[i] > a[j])
	    {
	        j--;
	    }
	    swap(a[i], a[j]);
	    reverse(a+i+1, a+n+1);
	}
   
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
	    init(); 
	    final = 0;
	    while(!final) 
	    {
	        for(int i = 1; i <= n; i++) 
	        {
	            cout << a[i];
	        }
	        cout << ' ';
	        sinh();
	    }	
	    cout << "\n";
	}
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
 