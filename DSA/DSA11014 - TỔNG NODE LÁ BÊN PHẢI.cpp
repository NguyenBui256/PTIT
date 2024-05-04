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

int ans = 0, ok = 1, bothnode = 1;

struct node{
    int val, side;
    node *left;
    node *right;
    node(int x)
    {
        this->val = x;
        this->left = this->right = NULL;
    }
};

bool isLeaf(node *root)
{
    if(!root) return false; 
    return root->left == NULL && root->right == NULL;
}

int sum(node *root)
{
    if(root == NULL) return 0;
    int res = 0;
    if(isLeaf(root->right)) res = root->right->val;
    if(root->right != NULL) res += sum(root->right); 
    if(root->left != NULL && !isLeaf(root->left)) res += sum(root->left);
    return res;
}

void solve()
{
    ans = 0;
    int n; cin >> n;
    map<int, node*> m;
    node *root = NULL;
    while(n--)
    {
        int u, v; char c;
        cin >> u >> v >> c;
        if(m.find(u) == m.end())
        {
            root = new node(u);
            m[u] = root; 
        }
        if(c == 'L'){
            m[u]->left = new node(v);
            m[v] = m[u]->left;
        }else{
            m[u]->right = new node(v);
            m[v] = m[u]->right;
        }
    }
    cout << sum(root) << "\n";
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