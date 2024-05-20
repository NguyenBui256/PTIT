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


deque<int> q;


void solve()
{   
    string s; cin >> s;
    if(s == "PUSHBACK")
    {
        int x; cin >> x;
        q.push_back(x);
    }
    else if(s == "PUSHFRONT")
    {
        int x; cin >> x;
        q.push_front(x);
    }
    else if(s == "PRINTFRONT"){
        if(!q.empty()) cout << q.front() << "\n";
        else cout << "NONE\n";
    }
    else if(s == "PRINTBACK")
    {
        if(!q.empty()) cout << q.back() << "\n";
        else cout << "NONE\n";
    }
    else if(s == "POPFRONT")
    {
        if(!q.empty()) q.pop_front();
    }
    else if(s == "POPBACK")
    {
        if(!q.empty()) q.pop_back();
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