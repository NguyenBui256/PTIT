#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
 
int n, final = 0;
int x[100], cnt;
vector<int> v;

void init()
{
    cnt = 1;
    x[1] = n;
}

void sinh()
{
    int i = cnt;
    while(i >= 1 && x[i] == 1)
    {
        i--;
    }
    if(i == 0) final = 1;
    else
    {
        int tmp = cnt - i + 1;
        --x[i];
        cnt = i;
        int q = tmp / x[i];
        int r = tmp % x[i];
        if(q) 
        {
            for(int j = 1; j <= q; j++) x[i+j] = x[i];
            cnt += q;
        }
        if(r) 
        {
            ++cnt;
            x[cnt] = r;
        }
    }
}  
 
void solve()
{
    cin >> n;
    init();
    final = 0;
    while(!final) 
    {
        cout << "(";
        for(int i = 1; i <= cnt; i++)
        {
            cout << x[i];
            if(i != cnt) cout << ' ';
        }
        cout << ") ";
        sinh();
    }
    cout << "\n";
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