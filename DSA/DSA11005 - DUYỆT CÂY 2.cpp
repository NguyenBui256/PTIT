#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--) 
#define fi first
#define se second
#define pb push_back
#define TEST cin >> t; while(t--)

struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        this->data = x;
        this->left = this->right = NULL;
    }
};

int find(int* M, int n,int k) {
	for (int i = 0; i < n; i++) if (M[i] == k)return i;
	return -1;
}
void add_Node(node*&T, int* M, int* N,int n) {
	T = new node(N[0]);
	int k = find(M, n, N[0]);
	int L[10001], R[10001], l = 0, r = 0;
	for (int i = 1; i < n; i++)
		if (find(M, n, N[i]) < k)L[l++] = N[i];
		else R[r++] = N[i];
	if (k > 0)add_Node(T->left, M, L, k);
	if (n - k - 1 > 0)add_Node(T->right, M + k + 1, R, n - k - 1);
}

void postOrder(node *root){
    if(root->left) postOrder(root->left);
    if(root->right) postOrder(root->right);
    cout << root->data << ' ';
}

void solve(){
    int n;
    cin >> n;
    int inorder[n], levelorder[n];
    for (int i = 0; i < n; i++)
        cin >> inorder[i];
    for (int i = 0; i < n; i++)
        cin >> levelorder[i];
    node *root = NULL;
    add_Node(root,inorder,levelorder,n);
    postOrder(root);
    cout << endl;
}

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    TEST
    {
        solve();
    }
}
