



#include <bits/stdc++.h>
using namespace std;

void display (vector <vector<int>> &m){     //  no need of size to be given in the function in 2D vectors.
    for (int i = 0; i<m.size(); i++){           // m.size() is a.
        for (int j = 0; j<m[0].size(); j++){    // m[0].size() is b.
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    vector <vector<int>> m(a, vector <int> (b));    //  this how we define a 2D vector with given size (axb).

    cout<<"enter the elements of matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }

    //  display............

    cout<<endl<<"The matrix is :-"<<endl<<endl;

    display(m);

    cout<<endl;

//**************************************************************************************************************************************************

    vector <vector<int>> v;
    vector <int> v0 = {1,2,3,4};
    vector <int> v1 = {5,6};
    vector <int> v2 = {7,8,9};


    v.push_back(v0);        //  in 2d vectors 1d vectors are pushed.
    v.push_back(v1);
    v.push_back(v2);

    //  now v is a 2d vector with variable no. of columns.

    cout<<v[1][2]<<endl<<endl;     //  garbag value is printed where there is no value.

    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;
    

    return 0;
}

/*  Advantages of vectors over arrays......

1> can increase rows.
2> can make variable no. of columns.******

*/