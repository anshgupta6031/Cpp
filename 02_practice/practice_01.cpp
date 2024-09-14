                                       //   PROGRAM TO FIND THE MAXIMUM OF FOUR NUMBERS.



#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;

    cout<<"Enter four numbers\n";
    cin>>a>>b>>c>>d;

    if (a>=b && a>=c && a>=d){
        cout<< a <<" is the maximum number.\n";
    }

    else if (b>=a && b>=c && b>=d){
        cout<< b <<" is the maximum number.\n";
    }

    else if (c>=b && c>=a && c>=d){
        cout<< c <<" is the maximum number.\n";
    }

    else if (d>=b && d>=c && d>=a){
        cout<< d <<" is the maximum number.\n";
    }


    return 0;
}