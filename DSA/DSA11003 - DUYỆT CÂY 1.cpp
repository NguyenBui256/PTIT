#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define TEST cin >> t; while(t--)
#define MOD 1000000007
#define ii pair<int,int> 
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define all(a) a.begin(), a.end()

int pos;
vi inorder, preorder;
unordered_map<int, int> m;

void process(int l, int r)
{
    if (l <= r)
    {
        int i = m[preorder[pos++]];
        process(l, i - 1);
        process(i + 1, r);
        cout << inorder[i] << " ";
    }
}

void solve()
{
    int n;
    cin >> n;
    inorder.clear();
    preorder.clear();
    inorder.resize(n);
    preorder.resize(n);
    pos = 0;
    m.clear();

    FOR(i, 0, n)
    {
        cin >> inorder[i];
        m[inorder[i]] = i;
    }
    for (int &i : preorder)
        cin >> i;

    process(0, n - 1);
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    cin >> t;
    // cin.ignore();
    while(t--)
    {
        solve();
    }
}