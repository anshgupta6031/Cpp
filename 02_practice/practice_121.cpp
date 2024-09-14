//  Using DFS, find the number of connected components in the graph.......



#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;


void dfs(int node){
    visited.insert(node);

    for(auto neighbour : graph[node]){
        if(!visited.count(neighbour)) dfs(neighbour);
    }
}


int connected_component(){
    int count = 0;

    for(int i=0; i<v; i++){
        if(!visited.count(i)){
            count++;
            dfs(i);
        }
    }

    return count;
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

        graph[source].push_back(destination);
        graph[destination].push_back(source);
    }

    cout << "The no. of connected components are : " << connected_component() <<endl;

    return 0;
}


