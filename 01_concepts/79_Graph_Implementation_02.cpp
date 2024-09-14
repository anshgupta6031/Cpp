//  Following is the graph implementation of Weighted Adjecency list....




#include <bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>> graph;          //  <neighbour vertex, weight>
int v;                      //  no. of vertices...


void add_edge(int source, int destination, int weight, bool bi_directional){
    graph[source].push_back({destination, weight});

    if(bi_directional) graph[destination].push_back({source, weight});
}


void display(){
    cout<<endl;
    for(int i=0; i<graph.size(); i++){
        cout<< i <<" -> ";
        for(auto x : graph[i]){
            cout<< "(" << x.first << " " << x.second << ")" << ", ";
        }
        cout<<endl;
    }
}


int main(){

    cout<< "Enter the no. of vertices : ";
    cin>>v;

    graph.resize(v, list<pair<int,int>>());

    int e;
    cout<<"Enter the no. of edges : ";
    cin>>e;

    while(e--){
        int source, destination, weight;
        cout<<"Enter the source, destination and weight of the edge : ";
        cin>> source >> destination >> weight;

        add_edge(source, destination, weight, true);
    }

    display();


    return 0;
}





