                   //   A PROGRAM TO PRINT THE MARKS OF n STUDENTS IN m SUBJECTS USING MULTIDIMENSIONAL ARRAY.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int students, subjects;

    cout<<"Enter the number of students : ";
    cin>>students;

    cout<<"Enter the number of subjects : ";
    cin>>subjects;

    int marks[students][subjects];

    for (int i = 0; i<students; i++){
        for (int j = 0; j<subjects; j++){
            cout<<"enter the marks of student "<<i+1<<" in subject "<<j+1<<" : ";
            cin>>marks[i][j];
        }
    }


    for (int i = 0; i<students; i++){
        for (int j = 0; j<subjects; j++){
            cout<<marks[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}

//   whenever 2D array is to be passed in a function the size of the array has to be given in the function.
//   example - void display (int arr[5][7]){.........some code.........}, here this 5 and 7 has to be given.