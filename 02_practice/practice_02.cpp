               //   PROGRAM TO CHECK WHETHER THE INPUT CHARACTER IS AN ALPHABET, DIGIT OR ANY SPECIAL CHARACTER.



#include <iostream>
using namespace std;

int main(){

    char ch;

    cout<<"Enter a character\n";
    cin>>ch;

    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"The entered character is an alphabet.\n";
    }

    else if (ch>='0' && ch<='9'){
        cout<<"The entered character is a digit.\n";
    }

    else{
        cout<<"The entered character is a special character.\n";
    }


    return 0;
}