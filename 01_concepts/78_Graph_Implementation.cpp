/*
    A graph can be implemented in the following ways :-

    1)  Edge list         ->        simple definition based implementation using a class node and another class edge and a third class graph which has a vector of edge class and another vector of node class.
    2)  Adjecency list      ->      implementation using an array of linked list...
    3)  Adjecency map       ->      implementation using an array of onordered_map...
    4)  Adjecency matrix    ->      implementation using 2D matrix of dimentions V x V, where V is the vertex....
    5)  Incedence matrix    ->      implementation using 2D matrix of dimentions V x E, where V is the vertex and E is the edge....
*/


//  Following is the graph implementation using Adjecency list, which is most used among all of the above implementations....



#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;          //  vector of linked list.....
int v;                      //  no. of vertices...


void add_edge(int source, int destination, bool bi_directional){
    graph[source].push_back(destination);

    if(bi_directional) graph[destination].push_back(source);
}


void display(){
    cout<<endl;
    for(int i=0; i<graph.size(); i++){
        cout<< i <<" -> ";
        for(auto x : graph[i]){
            cout<< x << ", ";
        }
        cout<<endl;
    }
}


int main(){

    cout<< "Enter the no. of vertices : ";
    cin>>v;

    graph.resize(v, list<int>());

    int e;
    cout<<"Enter the no. of edges : ";
    cin>>e;

    while(e--){
        int source, destination;
        cout<<"Enter the source and destination of the edge : ";
        cin>> source >> destination;

        add_edge(source, destination, true);
    }

    display();


    return 0;
}





