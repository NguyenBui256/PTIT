#include<bits/stdc++.h>
using namespace std;

int n, final = 0;
int a[100];

void init() 
{
    for(int i = 0; i < n; i++) a[i] = 0;
}

bool check(int a[]) 
{
    for(int i = 0; i < n / 2; i++) 
    {
        if(a[i] != a[n - i - 1]) return false; 
    }
    return true;
}

void in() 
{
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << "\n";
}

void sinh() 
{
    int i = n - 1;
    while(a[i] == 1 && i >= 0)
    {
        a[i] = 0;
        i--;
    }
    if(i == -1) final = 1;
    else  
    {
        a[i] = 1;
    }
}


void solve()
{
   cin >> n;
   init();
   final = 0;
   while(!final) 
   {
        if(check(a)) in();
        sinh();
   }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t = 1; 
    // cin >> t;
    while(t--)
    {
        solve();
    }
}