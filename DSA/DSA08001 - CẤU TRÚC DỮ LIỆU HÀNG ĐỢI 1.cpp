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




void solve()
{   
    queue<int> q;
    int Q; cin >> Q;
    while(Q--)
    {
        int x; cin >> x;
        if(x == 1) cout << q.size() << "\n";
        else if(x == 2)
        {
            if(q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(x == 3) 
        {
            int k; cin >> k; q.push(k);
        }
        else if(x == 4) 
        {
            if(!q.empty()) q.pop();
        }
        else if(x == 5)
        {
            if(!q.empty()) cout << q.front() << '\n';
            else cout << "-1\n";
        }
        else
        {
            if(!q.empty()) cout << q.back() << '\n';
            else cout << "-1\n";
        }
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