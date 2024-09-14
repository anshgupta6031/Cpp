//  display the top view of the tree..........
//  topics used :- trees, queue, pair class, maps.



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

//***************************************************************************************************************************************************

void top_view(Node* root){

    unordered_map<int,int> m;           //  (horizontal level, node val) is the key, value pair.

    queue<pair<Node*,int>> q;                 //  this is a queue of the pair node and int. here int is the horizontal level of the node.

    pair<Node*,int> r;
    r.first = root;
    r.second = 0;
    q.push(r);


    while(q.size() > 0){        //  BFS.........

        Node* temp = (q.front()).first;
        int horizontal_level = (q.front()).second;
        q.pop();

        if(m.find(horizontal_level) == m.end()){
            m[horizontal_level] = temp->val;
        }


        if(temp->left != NULL){
            pair<Node*,int> p;
            p.first = temp->left;
            p.second = horizontal_level-1;
            q.push(p);
        }

        if(temp->right != NULL){
            pair<Node*,int> z;
            z.first = temp->right;
            z.second = horizontal_level+1;
            q.push(z);
        }
    }


    int min_level = INT_MAX;
    int max_level = INT_MIN;

    for(auto x : m){                                //  finding min and max horizontal level in the tree.
        min_level = min(min_level, x.first);
        max_level = max(max_level, x.first);
    }


//  printing.............

    for(int i=min_level; i<=max_level; i++){
        cout<< m[i] << " ";
    }
    cout<<endl<<endl;

}


//***************************************************************************************************************************************************


int main(){

    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
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

    cout<<endl<<endl;
    

    //  top view display...........

    top_view(root);

    return 0;
}