



#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &p1, pair<int,int> &p2){                 //  defining a custom comparator......
    //  pair<int,int> -> first -value, second - weight
    double ratio1 = (p1.first*1.0) / (p1.second*1.0);           //  value/wt. ratio....
    double ratio2 = (p2.first*1.0) / (p2.second*1.0);

    return ratio1 > ratio2;
}


double fractional_knapsack(vector<int>& profit, vector<int>& weight, int W){        //  W = knapsack size.

    int n = profit.size();

    vector<pair<int,int>> arr;

    for(int i=0; i<n; i++){
        arr.push_back({profit[i], weight[i]});
    }

    sort(arr.begin(), arr.end(), cmp);          //  sorting using custom comparator......

    double result = 0;

    for(int i=0; i<n; i++){
        if(arr[i].second <= W){
            result += arr[i].first;
            W -= arr[i].second;
        }

        else{
            result += (((arr[i].first * 1.0) / (arr[i].second * 1.0)) * W);
            W = 0;
            break;
        }
    }

    return result;
}


int main(){

    vector<int> profit = {25,24,15};
    vector<int> weight = {18,15,10};
    int W = 20;                         //  W = knapsack size.
    
    double result = fractional_knapsack(profit,weight,W);

    cout<<"max profit = " << result <<endl;


    return 0;
}


//  T.C = O(n.logn).