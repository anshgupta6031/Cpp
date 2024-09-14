                                //  program to print every word of a string in different line.


#include <iostream>
#include <sstream>
using namespace std;

int main(){

    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);

    stringstream ss (str);      //  stringstream named ss stores str string.
    string temp;

    while (ss>>temp){           //  temp is given a substring from ss stringstream word by word leaving the spaces.
        cout<<temp<<endl;
    }

    return 0;
}