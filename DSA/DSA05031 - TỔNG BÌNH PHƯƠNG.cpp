#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int F[100005];
int n;

void solve()
{
    cin >> n; 
    cout << F[n] << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    F[1] = 1;
    F[2] = 2;
    int ok;
    FOR(i,3,10001) 
    {
        F[i] = 1e9;
        double tmp = 1.0*sqrt(i);
        ok = 0;
        if(tmp == (int)tmp) 
        {
            ok = 1;
        }
        FOR(j,1,i)
        {
            F[i] = min(F[i],F[j] + F[i-j]);
            if(ok && j == tmp) F[i] = 1;
        }
        // cout << F[i] << ' ';
    }
    cout << "\n";
    int t = 1;
    TEST
    {
        solve();
    }
}