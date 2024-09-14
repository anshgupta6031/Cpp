//  Morris Traversal : It is another itterative approach of inorder traversal but it has space complexity of O(1).
//  V.V.IMP for interviews............


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


void In_Order_Display(Node* root){         //  Morris Traversal..........

    Node* current = root;

    while(current != NULL){
        
        if(current->left != NULL){

            Node* predecessor = current->left;
            while(predecessor->right!=NULL && predecessor->right!=current) predecessor = predecessor->right;

            if(predecessor->right == NULL){             //  link......
                predecessor->right = current;
                current = current->left;
            }

            else{       //     predecessor->right = current       //  unlink.........
                predecessor->right = NULL;

                cout<< current->val <<" ";
                current = current->right;
            }

        }

        else{
            cout<< current->val <<" ";
            current = current->right;
        }
    }
}                                           //  T.C = O(n).       //  S.C = O(1).



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

    In_Order_Display(root);

    return 0;
}