//  Print all the possible permutations of a given string(with unique alphabets).
//  Method 2 (by backtracking)....



#include <bits/stdc++.h>
using namespace std;


void permutations(string& input, int i){

    if(i == input.size()-1){                      //  base case.....
        cout<< input <<endl;
        return;
    }


    for(int j=i; j<input.size(); j++){
        
        swap(input[i], input[j]);

        permutations(input, i+1);

        swap(input[i], input[j]);                 //  backtracking
    }

}


int main(){

    string input = "abc";

    permutations(input, 0);

    return 0;
}




