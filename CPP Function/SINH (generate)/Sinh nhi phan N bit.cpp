#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int n, a[100], final = 0; 

void ktao() 
{
    for(int i = 1; i <= n; i++) 
    {
        a[i] = 0;
    }
}

void sinh() 
{
    int i = n;
    while(i >= 1 && a[i] == 1) 
    {
        a[i] = 0;
        --i;
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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ktao();
    while(!final)
    {
        for(int i = 1; i <= n; i++) 
        {
            cout << a[i];
        }
        cout << "\n";
        sinh();
    }  
    return 0;
}