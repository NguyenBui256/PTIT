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

struct node{
    int val;
    node *left;
    node *right;
    node(int x)
    {
        this->val = x;
        this->left = this->right = NULL;
    }
};

void insertNode(node * &root, int x)
{
    if(root == NULL) root = new node(x);
    else if(root->val > x) insertNode(root->left, x);
    else if (root ->val <= x) insertNode(root->right, x);
}

void postorder(node *root)
{
    if(!root) return;
    if(root->left) postorder(root->left);
    if(root->right) postorder(root->right);
    cout << root->val << ' ';
}

void solve()
{
    int n; cin >> n;
    int a[n+1];
    FOR(i,0,n) cin >> a[i];
    sort(a,a+n);
    if(n % 2 == 0) n--;
    cout << a[n/2] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    TEST
    {
        solve();
    }
}