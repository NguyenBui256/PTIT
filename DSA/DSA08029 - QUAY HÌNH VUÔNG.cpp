#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
// #define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

vector<int> trai(vector<int> a)
{
    vector<int> res(7);
    res[1] = a[4]; res[2] = a[1]; res[3] = a[3];
    res[4] = a[5]; res[5] = a[2]; res[6] = a[6];
    return res;
}

vector<int> phai(vector<int> a)
{
    vector<int> res(7);
    res[1] = a[1]; res[2] = a[5]; res[3] = a[2];
    res[4] = a[4]; res[5] = a[6]; res[6] = a[3];
    return res;
}

bool check(vector<int> a, vector<int> b)
{
    for(int i = 1; i <= 6; i++)
    {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int BFS(vector<int> a, vector<int> b)
{
    queue<pair<vector<int>, int>> q;
    q.push({a,0});
    set<vector<int>> se; se.insert(a);
    while(!q.empty())
    {
        pair<vector<int>,int> top = q.front(); q.pop();
        if(check(top.first , b)) return top.second;
        else
        {
            vector<int> left = trai(top.first);
            if(se.count(left) == 0)
            {
                q.push({left, top.second + 1}); se.insert(left);
            }
            vector<int> right = phai(top.first);
            if(se.count(right) == 0)
            {
                q.push({right, top.second + 1}); se.insert(right);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        vector<int> a(7);
        for(int i = 1; i <= 6; i++) cin >> a[i];
        vector<int> b(7);
        for(int i = 1; i <= 6; i++) cin >> b[i];
        cout << BFS(a,b) << "\n";
    }
}