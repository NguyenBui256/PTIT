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

int ans = 0, a[1000006];

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        this->data = x;
        this->left = this->right = NULL;
    }
};

node* createNode(int l, int r){
    if(l > r) return NULL;
    int m = (l + r) / 2;
    node *res = new node(a[m]);
    res->left = createNode(l,m-1);
    res->right = createNode(m+1,r);
    return res;
}

void order(node *root){
    if(!root->left && !root->right) ans++;
    if(root->left) order(root->left);
    if(root->right) order(root->right);
}

void solve()
{
    ans = 0;
    int n; cin >> n;
    node *root = NULL;
    FOR(i,0,n){
        cin >> a[i];
    }
    sort(a,a+n);
    root = createNode(0,n-1);
    order(root);
    cout << ans << "\n";
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