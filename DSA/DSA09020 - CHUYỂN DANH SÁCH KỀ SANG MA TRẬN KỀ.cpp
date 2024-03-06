#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

int V, E, u;
vector<vector<int>> ke(1005);
int a[1003][1003];
int check[1005];

void solve()
{   
    cin >> E;
    cin.ignore();
    int n = E;
    int x,y;
    for(int i = 1; i <= n; i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp = "";
        while(ss >> tmp)
        {
            a[i][stoi(tmp)] = 1;
        }
    }
    FOR(i,1,n+1) 
    {
        FOR(j,1,n+1) cout << a[i][j] << ' ';
        cout << "\n";
    }
}



int main() 
{
    int t = 1;
    // TEST
    {
        solve();
    }
}