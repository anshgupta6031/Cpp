//  Print the elements of nth level in a binary tree.



#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};


void nthLevel(Node* root, int current, int n){

    if (root == NULL) return;

    if(current == n) cout<< root->val <<" ";

    nthLevel(root->left, current+1, n);

    nthLevel(root->right, current+1, n);
}


int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);


    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    int n;
    cout<<"Enter the level : ";
    cin>>n;

    nthLevel(a, 1, n);
    cout<<endl;

    
    return 0;
}