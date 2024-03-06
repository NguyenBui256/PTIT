#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

// int n, k, s, final = 0;
int a[100][100];
// int X[100];
int cot[100], nguoc[100], xuoi[100];
int ans = 0;


queue<int> q;


void solve()
{   
    string s; cin >> s;
    if(s == "PUSH")
    {
        int x; cin >> x;
        q.push(x);
    }
    else if(s == "POP")
    {
        if(!q.empty()) q.pop();
    }
    else {
        if(!q.empty()) cout << q.front() << "\n";
        else cout << "NONE\n";
    }
}



int main() 
{
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }
}