//////////////////////////////////////////////////    IMPORTANT FOR INTERVIEWS    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\      
        
                                                        //  Leetcode 42...........
                                                        //  (trapping rain water)

                                                        //  Method 2 (By sir)



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


vector<int> previous_greatest (vector <int> &v){
    int n = v.size();

    vector <int> pg(n);

    int max = v[0];
    pg[0] = -1;

    for (int i=1; i<n; i++){
        pg[i] = max;

        if (v[i]>max){
            max = v[i];
        }
    }

    return pg;
}


vector<int> next_greatest (vector <int> &v){
    int n = v.size();

    vector <int> ng(n);

    int max = v[n-1];
    ng[n-1] = -1;

    for (int i=n-2; i>=0; i--){
        ng[i]=max;

        if (v[i]>max){
            max = v[i];
        }
    }

    return ng;
}


int main_solution (vector <int> &height){
    int n = height.size();

    int count = 0;

    vector <int> pg = previous_greatest(height);
    vector <int> ng = next_greatest(height);
    vector <int> min_of_pg_and_ng(n);

    for (int i=1; i<n-1; i++){
        min_of_pg_and_ng[i] = min(pg[i], ng[i]);

        if (height[i] < min_of_pg_and_ng[i]){
            int diff = min_of_pg_and_ng[i] - height[i];
            count = count + diff;
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