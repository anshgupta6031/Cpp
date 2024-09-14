


#include <bits/stdc++.h>
using namespace std;


int main(){

    string st = "ansh gupta";
    cout<< st.length() <<endl;     //   Gives the lenth of the string excluding the null character.
    cout<< st.size() <<endl;       //   Gives the lenth of the string excluding the null character.

//**************************************************************************************************************************************************

    cout<<endl<<st<<endl;
    st.push_back('t');          //  pushes a character from the back.
    st.push_back('t');
    st.push_back('t');
    cout<<st<<endl;

//*********************************************************************************************************************************************

    st.pop_back();          //  removes a character from the end of the string.
    st.pop_back();
    st.pop_back();
    cout<<endl<<st<<endl<<endl;

//************************************************************************************************************************************************

    string a = "ansh";
    string b = " ";
    string c = "guru";
    cout<< "jhbadabd" + a+b+c+ " jdskjksdnc"<<endl;    //  + operator concatenates the strings.
                                                       //   we can add any string anywhere in any desired order.

//*****************************************************************************************************************************************************

    cout<<endl<< st <<endl;
    cout<< st.substr(3,6) <<endl;                 //  it gives the substring from the first passed argument (index) to the (first passed argument + second passed argument)'s index of the string.
    cout<< st.substr(3)<<endl<<endl;                //  if we do not give second argument it gives the substring till the end.
                                                //  syntax :- st.substr(kis index se , kitni length ka substring chahiye);

//***********************************************************************************************************************************************************

    int x = 1276387;
    string p = to_string(x);            //  it converts the passed integer value to a string.
    cout<< p <<endl;                    //  NOTE :- this thing can not be done by type casting as there is no type casting to string available in c++.

//****************************************************************************************************************************************************************

    cout<<endl<<st<<endl;
    sort(st.begin(), st.end());         //  sorts the strings lexographically. i.e on the basis of ascii values.
    cout<<st<<endl;

//********************************************************************************************************************************************************

    string num = "123456";
    int z = stoi(num);          //  converts string to integer.
    cout<<endl<<z+1<<endl;

    string num2 = "123456789987654321";
    long long z1 = stoll(num2);             //  converts string to long long datatype.
    cout<<z1+1<<endl<<endl;                       //  used for a very large integer value.


// //**************************************************************************************************************************************

    string s1 = "abcda";
    string s2 = "abcde";
    int k = s1.compare(s2);      //   it compares the string s1 with the passed string. Gives '0' if strings are equal, '1' if the crossponding ASCII value of the string is greater then the passed one. AND, gives '-1' if the crossponding ASCII values of the passed string is greater than the other.
    cout<<"the value of 'k' is "<<k<<endl;


//*******************************************************************************************************************************************

    cout<<endl<<s1<<endl;
    reverse (s1.begin(), s1.end());         //  same as in vectors.
    cout<<s1<<endl;                         //  the string gets reversed.


    return 0;
}