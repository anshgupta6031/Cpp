                                                    //    SAME AS IN C LANGUAGE.


#include <iostream>
using namespace std;

int main(){
    int rating;
    cout<<"Enter the rating between 1-5"<<endl;
    cin>>rating;

    switch(rating){          // rating has to be a int or char.
        case 1:
            cout<<"The rating given by you is 1"<<endl;
            break;                  // break is used to get out of the switch condition
                                    // if break is not used, all the cases below the triggered case along with the default case are also executed.
        case 2:
            cout<<"The rating given by you is 2"<<endl;
            break;

        case 3:
            cout<<"The rating given by you is 3"<<endl;
            break;

        case 4:
            cout<<"The rating given by you is 4"<<endl;;
            break;

        case 5:
            cout<<"The rating given by you is 5"<<endl;
            break;

        default:           // default is executed if none of the cases are triggered.
            cout<<"invalid rating"<<endl;
            break;

        }


    return 0;
}