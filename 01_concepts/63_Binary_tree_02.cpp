//  Construction of a binary tree by taking user input in level order............



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


int level(Node* root){
    if (root == NULL) return 0;

    return 1 + max(level(root->left), level(root->right));
}


void nthLevel(Node* root, int current, int n){

    if (root == NULL) return;

    if(current == n){
        cout<< root->val <<" ";
        return;
    }

    nthLevel(root->left, current+1, n);

    nthLevel(root->right, current+1, n);
}


void Level_Order_Display(Node* root){

    int n = level(root);

    for(int i=1; i<=n; i++){
        nthLevel(root, 1, i);
        cout<<endl;
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);


    //  processing.................

    queue<Node*> q;

    Node* root = new Node(arr[0]);
    q.push(root);

    int i = 1;
    int j = 2;

    while((q.size() > 0) && (i < n)){

        Node* temp = q.front();
        q.pop();

        Node* l;
        Node* r;

        if(arr[i] != INT_MIN) l= new Node(arr[i]);
        else l = NULL;

        if((arr[j] != INT_MIN) && (j < n)) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;

    }


    //  display..........

    Level_Order_Display(root);

    return 0;
}