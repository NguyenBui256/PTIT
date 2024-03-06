#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
void solve(int n, char a, char b, char c)
{
	if(n == 1) 
    {
        cout << a << " -> " << c << "\n";
        return;
    }
    solve(n-1,a,c,b);
    cout << a << " -> " << c << "\n";
    solve(n-1,b,a,c);
}



int main() 
{
    int T = 1;
    while(T--)
    {
        int n;
        cin >> n; 
        solve(n,'A','B','C');
    }
}