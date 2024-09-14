//  Binary tree is a tree having at most 2 child nodes.



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


//**********************************************************************************************************************************************


void Pre_Order_Display(Node* root){         //  In this display function, the traversal is done in pre order. '->'

    if (root == NULL) return;

    cout<< root->val <<" ";

    Pre_Order_Display(root->left);

    Pre_Order_Display(root->right);
}                                           //  T.C = O(n).       //  S.C = O(height).


void In_Order_Display(Node* root){         //  In this display function, the traversal is done in order. '↑'

    if (root == NULL) return;

    In_Order_Display(root->left);

    cout<< root->val <<" ";

    In_Order_Display(root->right);
}                                           //  T.C = O(n).       //  S.C = O(height).


void Post_Order_Display(Node* root){         //  In this display function, the traversal is done in Post order. '<-'

    if (root == NULL) return;

    Post_Order_Display(root->left);

    Post_Order_Display(root->right);

    cout<< root->val <<" ";
}                                           //  T.C = O(n).       //  S.C = O(height).


//**********************************************************************************************************************************************


int sum(Node* root){                    //  function to find the sum of the tree.
    if (root == NULL) return 0;

    return root->val + sum(root->left) + sum(root->right);
}


int size(Node* root){                    //  function to find the size of the tree.
    if (root == NULL) return 0;

    return 1 + size(root->left) + size(root->right);
}


int maximum(Node* root){                    //  function to find the maximum value in the tree.
    if (root == NULL) return INT_MIN;

    int m = max(maximum(root->left), maximum(root->right));     //  had to find max(root->val, maximum(root->left), maximum(root->right)) like this as max() takes only 2 attributes.
    m = max(m, root->val);

    return m;
}


int level(Node* root){                    //  function to find the no. of levels in the tree.
    if (root == NULL) return 0;

    return 1 + max(level(root->left), level(root->right));      //  each time left or right is called, 1 is added and whichever is maximum gives the level of the tree.
}


//**************************************************************************************************************************************************


void nthLevel(Node* root, int current, int n){          //  function to print thr nth level of the tree......

    if (root == NULL) return;

    if(current == n){
        cout<< root->val <<" ";
        return;
    }

    nthLevel(root->left, current+1, n);

    nthLevel(root->right, current+1, n);
}


void Level_Order_Display(Node* root){         //  In this display function, the traversal is done in Level vise order. Using DFS(depth first search).
    
    int n = level(root);

    for(int i=1; i<=n; i++){
        nthLevel(root, 1, i);
    }
}


//**************************************************************************************************************************************************


void Level_Order_Display2(Node* root){          //  Using BFS(breadth first search).

    queue<Node*> q;                             //  an extra queue is used.
    q.push(root);

    while(q.size() > 0){
        Node* temp = q.front();
        cout<< temp->val <<" ";
        q.pop();

        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
}                                               //  This is the better approach. But, by this method we can not display the nodes level by level in different lines.


//**********************************************************************************************************************************************


int main(){

    Node* a = new Node(10);         //  root node.
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    //  linking the nodes to form a binary tree.

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;


    Pre_Order_Display(a);
    cout<<endl<<endl;

    In_Order_Display(a);
    cout<<endl<<endl;

    Post_Order_Display(a);
    cout<<endl<<endl;

    cout<< "Sum : " << sum(a) <<endl<<endl;

    cout<< "Size : " << size(a) <<endl<<endl;

    cout<< "Maximum : " << maximum(a) <<endl<<endl;

    cout<< "Level : " << level(a) <<endl<<endl;

    cout<< "Height : " << level(a) - 1 <<endl<<endl;            //  height of any tree = level - 1.


    Level_Order_Display(a);
    cout<<endl<<endl;

    Level_Order_Display2(a);
    cout<<endl<<endl;


    return 0;
}


/*  Types of Binary Trees :-

1) Full BT : A BT is a full BT if each node has either 2 or 0 nodes.

2) Perfect BT : Every node except the last level leaf nodes have exactly 2 child nodes.

3) Complete BT : a binary tree in which every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.

4) Balanced BT : a binary tree in which the height of the left and right subtree of any node do not differ by more than 1.

5) Degenerate or Skewed BT : A binary tree in which each node has either one or no child node.
*/