//  Using DFS, find weather there exist a path between any 2 given vertices in the graph....




#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;


bool dfs(int curr, int end){

    if(curr == end) return true;

    visited.insert(curr);           //  marked visited.....

    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            bool result = dfs(neighbour, end);
            if(result == true) return true;
        }
    }

    return false;
}


bool any_path(int source, int destination){
    return dfs(source, destination);
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

    cout<<"Enter the source and destination of given two nodes : ";
    int x,y;
    cin>>x>>y;

    cout<< any_path(x, y) <<endl;


    return 0;
}


//  T.C = O(V + E).
//  S.C = O(V).
