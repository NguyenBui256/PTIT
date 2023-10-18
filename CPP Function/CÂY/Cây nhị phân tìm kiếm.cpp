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

void makeNode(node *root)
{

}

//Cây nhị phân tìm kiếm: (node trái < node cha < node phải)

bool search(*node root, int key) // Log(n);
{
    if(root == NULL) return false;
    if(root->data == key) return true;
    else if(root->data > key) 
    {
        //key thuoc vao cay ben trai
        return search(root->left, key);
    }
    else 
    {
        return search(root->right, key);
    }
}

node *insert(*node root, int key)
{
    if(root == NULL) return makeNode(key); 
    if(key < root->data) 
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
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