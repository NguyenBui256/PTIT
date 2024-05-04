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

int ans, ok = 1, bothnode = 1;

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

void makeRoot(node *root, int u, int v, char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if(root == NULL) return;
    if(root->val == u) makeRoot(root, u, v, c);
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

bool isLeaf(node *root)
{
    if(!root) return false; 
    return root->left == NULL && root->right == NULL;
}

int sum(node* T)
{
    if (!T)
        return 0;
    int L = sum(T->left), R = sum(T->right);
    if (!T->left && !T->right)
        return T->val;
    if (!T->left)
        return R + T->val;
    if (!T->right)
        return L + T->val;
    ans = max(ans, L + R + T->val); //nếu T có cả 2 con thì cập nhật ans là độ dài đường đi lớn nhất giữa 2 lá của 2 nhánh
    return max(L, R) + T->val; //cập nhật độ dài đường đi dài nhất cho node cha
}

void solve()
{
    ans = -INT_MAX;
    int n; cin >> n;
    map<int, node*> m;
    node *root = NULL;
    while(n--)
    {
        int u, v; char c;
        cin >> u >> v >> c;
        if(!root) {
            root = new node(u);
            makeRoot(root,u,v,c);
        }
        else insertNode(root,u,v,c);
    }
    sum(root);
    cout << ans << "\n";
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