//  display the boundary of the tree..........



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


void left_boundary(Node* root){

    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    cout<< root->val <<" ";

    left_boundary(root->left);
    if(root->left == NULL) left_boundary(root->right);
}


void leaf_node(Node* root){

    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) cout<< root->val <<" ";

    leaf_node(root->left);
    leaf_node(root->right);
}


void right_boundary(Node* root){

    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    right_boundary(root->right);
    if(root->right == NULL) right_boundary(root->left);

    cout<< root->val <<" ";                                 //  printed after call to reverse the printing.......
}


void boundary(Node* root){              //  boundary = left boundary + leaf nodes + right boundary(in reverse order).
    left_boundary(root);
    leaf_node(root);
    right_boundary(root->right);        //  ignoring the root as it is covered in the left boundary......
}


int main(){

    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);


    //  constructing tree..........

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

    cout<<endl<<endl<<endl;

    //  boundary traversal display...........
    
    boundary(root);


    return 0;
}