#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, k, a[100], final = 0;
void init() {
    for(int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
}

void sinh() 
{
    int i = n; 
    while(i >= 1 && a[i] == k)
    {
        a[i] = 1;
        i--;
    }
    if(i == 0) 
    {
        final = 1;
    }
    else
    {
        a[i]++;
    }
}

int main() {
    cin >> k >> n;
    init();
    while(!final) 
    {    
        for(int i = 1; i <= n; i++) 
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
