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
    int data;
    node* left;
    node* right;
    node(int x){
        this->data = x;
        this->left = this->right = NULL;
    }
};

int cnt = 0;

void createNode(node *&root, int x){
    if(!root) root = new node(x);
    else if(x <= root->data) createNode(root->left,x);
    else createNode(root->right, x);
}

void order(node *root){
    if(!root->left && !root->right) cnt++;
    if(root->left) order(root->left);
    if(root->right) order(root->right);
}

void solve()
{
    cnt = 0;
    int n; cin >> n;
    int x;
    node *root = NULL;
    FOR(i,0,n){
        cin >> x;
        createNode(root,x);
    }
    order(root);
    cout << n - cnt << "\n";
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