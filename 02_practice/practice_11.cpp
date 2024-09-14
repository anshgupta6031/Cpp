                                            //  linear search
                        //  find the element x in the array. take array and x as input.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"enter the elements of the array.\n";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"enter the element you want to search"<<endl;
    cin>>x;

    bool flag = 0;

    for (int i=0; i<n; i++){
        if (arr[i]==x){
            cout << "The element you are searching is in the array."<<endl;
            flag = 1;
            break;
        }
    }

    if (flag==0){
        cout <<"The element you are searching is not in the array."<<endl;
    }


    return 0;
}