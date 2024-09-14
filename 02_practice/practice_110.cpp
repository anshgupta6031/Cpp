//  Find the inorder successor and inorder predecessor of any node in a binary tree.



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


//**************************************************************************************************************************************************


int inorder_predecessor(Node* n){          //  algorithm to find the inorder predecessor node is :- go left once and then keep going right untill you get NULL. the last node will be the inorder predesessor.
    if (n->left==NULL){
        cout<<"No inorder predecessor exists for this node!!!"<<endl;
        return 0;
    }

    Node* pred = n->left;

    while(pred->right != NULL){
        pred = pred->right;
    }

    return pred->val;
}


int inorder_successor(Node* n){          //  algorithm to find the inorder successor node is :- go right once and then keep gooing left untill you get NULL. the last node will be the inorder successor.
    if (n->left==NULL){
        cout<<"No inorder successor exists for this node!!!"<<endl;
        return 0;
    }

    Node* pred = n->right;

    while(pred->left != NULL){
        pred = pred->left;
    }

    return pred->val;
}


//**************************************************************************************************************************************************



int main(){

    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
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


    cout<< inorder_predecessor(root) <<endl;        //  finding inorder predecessor of the root node.

    cout<< inorder_successor(root) <<endl;        //  finding inorder predecessor of the root node.



    return 0;
}