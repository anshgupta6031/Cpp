//  Print all the possible permutations of a given string(with duplicate alphabets).




#include <bits/stdc++.h>
using namespace std;


void permutations(string& input, int i){

    if(i == input.size()-1){                      //  base case.....
        cout<< input <<endl;
        return;
    }

    unordered_set<char> s;

    for(int j=i; j<input.size(); j++){
        if(s.find(input[j]) != s.end()) continue;

        s.insert(input[j]);
        swap(input[i], input[j]);

        permutations(input, i+1);

        swap(input[i], input[j]);                 //  backtracking
    }

}


int main(){

    string input = "aba";

    permutations(input, 0);

    return 0;
}




