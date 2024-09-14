           //   PROGRAM TO COUNT THE MINIMUM No. OF NOTES IN A GIVEN AMOUNT OF MONEY USING THE SWITCH CASE STATEMENT.


#include <iostream>
using namespace std;

int main(){

    int amount, count = 0;

    cout<<"Enter the amount :";
    cin>>amount;

    switch (amount>=2000){      //  a condition can also be passed in a switch.
        case 1 :
            cout<<"No. of 2000 notes = "<<(amount/2000)<<endl;
            count+=(amount/2000);
            amount%=2000;
    }

    switch (amount>=500){
        case 1 :
            cout<<"No. of 500 notes = "<<(amount/500)<<endl;
            count+=(amount/500);
            amount%=500;
    }

    switch (amount>=100){
        case 1 :
            cout<<"No. of 100 notes = "<<(amount/100)<<endl;
            count+=(amount/100);
            amount%=100;
    }

    switch (amount>=50){
        case 1 :
            cout<<"No. of 50 notes = "<<(amount/50)<<endl;
            count+=(amount/50);
            amount%=50;
    }

    switch (amount>=20){
        case 1 :
            cout<<"No. of 20 notes = "<<(amount/20)<<endl;
            count+=(amount/20);
            amount%=20;
    }

    switch (amount>=10){
        case 1 :
            cout<<"No. of 10 notes = "<<(amount/10)<<endl;
            count+=(amount/10);
            amount%=10;
    }

    switch (amount>=0){
        case 1 :
            cout<<"No. of 1 Rs. pennys = "<<amount<<endl<<endl;
    }

    cout<<"Total No. of notes = "<<count<<endl;
    cout<<"Total No. of 1 Rs. pennys = "<<amount<<endl;




    return 0;
}