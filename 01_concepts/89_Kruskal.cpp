//  https://www.hackerrank.com/challenges/kruskalmstrsub/problem#!

//  This algorithm is used to find the minimum weight spanning tree in a given graph......



#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int find(vector<int>& parent, int x){
    if(parent[x] == x) return x;

    return parent[x] = find(parent, parent[x]);             //  path compression.........
}


void Union(vector<int>& parent, vector<int>& rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);

    if(a == b) return;

    if(rank[a] < rank[b]){
        parent[a] = b;
        rank[b]++;
    }

    else{
        parent[b] = a;
        rank[a]++;
    }
}


struct Edge{
    int source;
    int destination;
    int weight;
};


bool cmp(Edge e1, Edge e2){
    return e1.weight < e2.weight;
}


ll kruskal(vector<Edge>& input, int v, int e){
    sort(input.begin(),input.end(), cmp);                   //  sorted the edges on the basis of weight.....

    vector<int> parent(v+1);            //  taking 1 based indexing.....
    vector<int> rank(v+1, 0);

    for(int i=0; i<=v; i++){
        parent[i] = i;
    }

    int edge_count = 0;                 //  edges taken in MST....
    int i = 0;                          //  current edge....
    ll ans = 0;                         //  total weight of MST....

    while(edge_count < v-1 && i < input.size()){
        Edge curr = input[i];

        int source_parent = find(parent, curr.source);
        int destination_parent = find(parent, curr.destination);

        if(source_parent != destination_parent){                        //  include edge as this will not make a cycle......
            Union(parent, rank, source_parent, destination_parent);
            ans += curr.weight;
            edge_count++;
        }

        i++;
    }

    return ans;
}


int main(){

    int v, e;               //  v = no. of vertices, e = no. of edges
    cin>>v>>e;

    vector<Edge> input(e);

    for(int i=0; i<e; i++){
        cin>> input[i].source >> input[i].destination >> input[i].weight;
    }

    cout<< kruskal(input, v, e) <<endl;

    return 0;
}


//  T.C = O(V + E.log E)