#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define MOD 1000000007
#define TEST int t;cin >> t;while(t--)

ll n, m, k, final = 0;
int a[100005];
// int b[10000005];

void solve()
{
    cin >> n;
    vector<string> v;
    FOR(i,0,n) cin >> a[i];
    int first = a[0];
    int key;
    FOR(i,1,n)
    {
        key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        } 
        a[j+1] = key;
        string s = "";
        FOR(k,0,i+1) s += to_string(a[k]) + " ";
        v.push_back(s);
    }
    for(int i = v.size() - 1; i >= 0; i--) 
    {
        cout << "Buoc " << i + 1 << ": " << v[i] << "\n";
    }
    cout << "Buoc 0: " << first << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // init();
    // TEST
    solve();
}