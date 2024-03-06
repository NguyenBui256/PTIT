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
    ll n;
    queue<string> q;
    vector<string> st;
    cin >> n;
    q.push("6");
    q.push("8");
    while(!q.empty())
    {
        string tmp = q.front();
        q.pop();
        if(tmp.size() > n) break;
        st.push_back(tmp);
        q.push(tmp + "6");
        q.push(tmp + "8");
    }
    cout << st.size() << "\n";
    for(int i = st.size() - 1; i >= 0; i--) cout << st[i] << ' ';
    cout << "\n";
}



int main() 
{
    int t = 1;
    TEST
    {
        solve();
    }
}