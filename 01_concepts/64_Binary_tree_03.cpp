//  Itterative approach for pre, in and post order traversal...........



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


void Pre_Order_Display(Node* root){         //  Itterative approach...........

    stack<Node*> st;
    st.push(root);

    while(st.size() > 0){
        Node* temp = st.top();
        cout << temp->val <<" ";
        st.pop();

        if(temp->right != NULL) st.push(temp->right);
        if(temp->left != NULL) st.push(temp->left);
    }
}                                           //  T.C = O(n).       //  S.C = O(height).



void Post_Order_Display(Node* root){         //  Itterative approach...........

    stack<Node*> st;
    stack<Node*> helper;
    st.push(root);

    while(st.size() > 0){
        Node* temp = st.top();
        helper.push(temp);                            //    nodes are pushed in reversed post order into the helper stack.
        st.pop();

        if(temp->left != NULL) st.push(temp->left);
        if(temp->right != NULL) st.push(temp->right);
    }

    while(helper.size() > 0){                           //  printing in reverse order.............
        cout<< helper.top()->val <<" ";
        helper.pop();
    }
}                                           //  T.C = O(n).       //  S.C = O(height).



void In_Order_Display(Node* root){         //  Itterative approach...........

    stack<Node*> st;

    Node* n = root;

    while((st.size() > 0) || (n != NULL)){
        if(n != NULL){
            st.push(n);
            n = n->left;
        }

        else{
            Node* temp = st.top();
            st.pop();
            cout<< temp->val <<" ";
            n = temp->right;
        }
    }
}                                           //  T.C = O(n).       //  S.C = O(height).


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


    return 0;
}


//  NOTE : Inorder traversal of a binary search tree is in sorted order.