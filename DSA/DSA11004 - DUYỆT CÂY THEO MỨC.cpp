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

struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->val = x;
        this->left = this->right = NULL;
    }
};

void makeRoot(Node *root, int u, int v, char c)
{
    if(c == 'L') root->left = new Node(v);
    else root->right = new Node(v);
}

void insertNode(Node *root, int u, int v, char c)
{
    if(root == NULL) return;
    if(root->val == u) makeRoot(root, u, v, c);
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void bfs(Node *root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *tmp = q.front(); q.pop();
        cout << tmp->val << ' ';
        if(tmp->left != NULL) q.push(tmp->left);
        if(tmp->right != NULL) q.push(tmp->right);
    }
}

void solve()
{
    int n; cin >> n;
    Node *root = NULL;
    while(n--)
    {
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL)
        {
            root = new Node(u);
            makeRoot(root, u, v, c);
        }
        else insertNode(root, u, v, c);
    }
    bfs(root);
    cout << '\n';
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
