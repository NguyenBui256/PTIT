#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007

ll n, m, k, final = 0;
// ll a[100005];

// int C[1005][1005];

// void init() 
// {
//     C[0][0] = 1;
//     C[1][0] = 1;
//     FOR(i,1,1001) 
//     {
//         FOR(j,0,i+1) 
//         {
//             C[i][j] = (C[i-1][j] % MOD + C[i-1][j-1] % MOD) % MOD;
//         }
//     }
// }

void solve()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    ll a[n1], b[n2], c[n3];
    vector<ll> v;
    FOR(i,0,n1) cin >> a[i];
    FOR(i,0,n2) cin >> b[i];
    FOR(i,0,n3) cin >> c[i];
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2 && k < n3)
    {
        if(a[i] == b[j] && b[j] == c[k]) 
        {
            v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i] < b[j]) i++;
        else if(b[j] < c[k]) j++;
        else k++;
    }
    if(!v.size()) cout << "-1";
    else 
    {
        for(int i = 0; i < v.size(); i++) 
        {
            cout << v[i];
            if(i != v.size() - 1) cout << ' ';
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    int t; 
    cin >> t;
    while(t--) solve();
    
}