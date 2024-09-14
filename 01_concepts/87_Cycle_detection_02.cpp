//  Cycle detection in an undirected graph using DFS (Method 2).......


//  if while dfs, there is a visited node which is not the parent of the current node then there is a cycle in the graph.


#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;


bool dfs(int curr, int parent){

    visited.insert(curr);           //  marked visited.....

    for(auto neighbour : graph[curr]){
        if(visited.count(neighbour) && neighbour != parent){        //  cycle detected......
            return true;
        }

        else if(!visited.count(neighbour)){
            bool res = dfs(neighbour, curr);
            if(res == true) return true;
        }
    }

    return false;
}


bool has_cycle(){
    bool result = false;

    for(int i=0; i<v; i++){
        if(!visited.count(i)){
            result = dfs(i, -1);
            if(result == true) return true;
        }
    }

    return false;
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

    
    bool b = has_cycle();

    (b)? cout<<"CYCLE DETECTED!!!" : cout<<"NO CYCLE DETECTED!!!";


    return 0;
}


//  T.C = O(V + E).
//  S.C = O(V).
