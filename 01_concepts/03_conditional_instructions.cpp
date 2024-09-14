                                                    //    SAME AS IN C LANGUAGE.


#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number \n";
    cin>>a;

    if (a % 2 == 0){
        cout<<a <<" is an even number.\n";
    }

    else{
        cout<<a <<" is an odd number."<<endl;
    }

    //  '&&' is used for 'and' logic.
    //  '||' is used for 'or' logic.
    //  '!' is used for 'not' logic.

    int zz;
    if (zz=0){          //  if 'zz' would be anything except equal to zero, it would have been printed out.
        cout<<"dsjgfjaghd";
    }

    return 0;
}