#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define FORD(i,a,b) for(int i = a; i > b; i--)
#define fi first
#define se second

struct node{
    int data;
    node *left;
    node *right;
    node(int x) // ham khoi tao;
    {
        data = x;
        left = right = NULL; 
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
    if(root->data == u)
    {
        makeRoot(root, u, v, c);
    }
    else
    {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void levelOrder(node *root) //duyệt theo mức  ~~ BFS    
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *top = q.top(); q.pop();
        cout << top->data << ' ';
        if(top->left != NULL)
        {
            q.push(top->left);
        }
        if(top->right != NULL)
        {
            q.push(top->right);
        }
    }
}

// void SpiralOrder()
// {
//     //dung 2 stack hoac 2 queue;
// }

//Dạng input: u v c: VD: 1 2 L: đỉnh 2 là node trái của đỉnh 1

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}   