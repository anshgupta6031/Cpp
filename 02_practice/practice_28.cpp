//////////////////////////////////////////////////    IMPORTANT FOR INTERVIEWS    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\      
        
                                                        //  Leetcode 42...........
                                                        //  (trapping rain water)

                                                        //  Method 1 (By me)



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main_solution (vector <int> &height){
    int n = height.size();

    int count = 0;

    int max = 0;
    for (int i=0; i<n; i++){
        if (max<height[i]){
            max = height[i];
        }
    }

    for (int i=0; i<=(max-1); i++){     //  i is the base line.

        int last_maxima;
        for (int k=n-1; k>=0; k--){
            if (height[k]>=i+1){
                last_maxima = k;
                break;
            }
        }

        int first_maxima;
        for (int e=0; e<n; e++){
            if (height[e]>=i+1){
                first_maxima=e;
                break;
            }
        }

        for (int j=first_maxima+1; j<last_maxima; j++){
            if (height[j]<=i){                 
                    count++;
            }
        }
    }

    return count;
}


int main(){

    vector <int> v;
    int n;

    cout<<"enter the number of elements : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    display(v);
    
    cout<<"height = "<<main_solution(v);

    return 0;
}