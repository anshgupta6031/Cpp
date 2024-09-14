


#include <iostream>
#include <string>
using namespace std;


int main(){

    char st[] = {'A','n','s','h','\0'};   //   '\0' (also called null character) tells that string is terminated.

    char str[] = "Ansh Gupta";                //  Another way of initializing string.


    for (int i=0; st[i]!='\0'; i++){        //  printing string........
        cout<<st[i];
    }

    cout<<endl;

    for (int j=0; str[j]!='\0'; j++){
        cout<<str[j];
    }

    cout<<endl;

    string ptr = "Guru";             //   Another way of initializing string using string datatype.
    cout<<ptr<<endl;             //   convinient way of printing string.
    cout<<str<<endl;

//**************************************************************************************************************************************

    string name;
    cout<<"enter your name.\n";
    cin>>name;                              //  taking string as input................ but only the first word is stored.
    cout<<"Your name is "<<name<<endl;

    //   There is a problem in using cin>> for strings as when we print, only the first word is printed. i.e. it gets terminated at space because cin>> is separated / terminated when an enter or space is passed.
    //   We can use getline() function instead of cin>> for any multiword string.


    fflush(stdin);      //   This function is used to clear the input of previously entered char so that it can store a fresh value in it again.
                        //   for using getline() function just after cin>> we had to use this function so that it can clear out the unnecessary inputs which are rejected by cin>>.
                        //   we can also use "cin.ignore();" instead of fflush(stdin).

    string s;
    cout<<"enter a string.\n";

    getline(cin,s);              //  taking string as input................
    cout<<"the entered string is : "<< s <<endl;

    string strg = "abcdefg";
    cout<< strg<<endl;
    strg[5] = 'p';           //  the value gets changed. i.e in c++ strings are mutable.
    cout<< strg<<endl;


    return 0;
}