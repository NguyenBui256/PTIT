#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

// int n, k, s, final = 0;
int a[100][100];
// int X[100];
int cot[100], nguoc[100], xuoi[100];
int ans = 0;


deque<int> q;


void solve()
{   
    int n;
    queue<long long> q;
    cin >> n;
    q.push(9);
    while(!q.empty())
    {
        long long tmp = q.front();
        q.pop();
        if(tmp % n == 0)
        {
            cout << tmp << "\n";
            return;
        }
        q.push(tmp * 10);
        q.push(tmp * 10 + 9);
    }
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}