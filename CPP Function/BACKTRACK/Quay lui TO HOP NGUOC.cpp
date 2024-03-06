#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back

int n, m, k, final = 0;
int b[20];
int used[30];
int X[20];
int x = 1;
vector<string> v;
bool nt(int x)
{
    for(int i = 2; i <= sqrt(x); i++) 
    {
        if(x % i == 0) return false;
    }
    return x > 1;
}

bool check(int X[])
{
    int cnt = 0;
    for(int i = 1; i <= n; i++) 
    {
        cnt += X[i];
    }
    return cnt % 2 == 0;
}

void quaylui(int i)
{
    for(int j = n - k + i; j >= X[i-1] + 1; j--)
    {
            X[i] = j;
            if(i == k)
            {
                for(int u = 1; u <= k; u++) cout << X[u] << ' ';
                cout << "\n";
            }
            else quaylui(i+1);
    }
}


void solve() 
{
    cin >> n >> k;
    // X[0] = 2;
    quaylui(1);
}


int main() 
{
    int t = 1; 
    cin >> t;
    while(t--) solve();
}