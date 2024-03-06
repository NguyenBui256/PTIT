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
    queue<string> q;
    cin >> n;
    string ans = "";
    while(n)
    {
        ans = to_string(n % 2) + ans; 
        n /= 2;
    }
    q.push("1");
    while(!q.empty())
    {
        string tmp = q.front();
        q.pop();
        cout << tmp << ' ';
        if(tmp == ans) 
        {
            cout << "\n";
            return;
        }
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
    // cout << ans << "\n";
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}