#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// int a[10000005];
// int b[10000005];

string a, b;
int F[1003][1003];

// void init()
// {
//     F[1] = 1; F[2] = 1;
//     FOR(i,3,93) 
//     {
//         F[i] = F[i-1] + F[i-2]; 
//     }
// }

void solve()
{
    getline(cin,a);
    getline(cin,b);
    FOR(i,0,a.size()) 
    {
        FOR(j,0,b.size())
        {
            if(a[i] == b[j])
            {
                F[i+1][j+1] = F[i][j] + 1;
            }   
            else
            {
                F[i+1][j+1] = max(F[i+1][j], F[i][j+1]);
            }
        }
    }
    cout << F[a.size()][b.size()] << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();
}