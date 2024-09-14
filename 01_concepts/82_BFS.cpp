//  Using BFS, find the shortest path distance to all the nodes from a given source node....




#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;


void bfs(int source, vector<int>& distance){
    queue<int> q;

    distance.resize(v, INT_MAX);
    distance[source] = 0;

    visited.insert(source);
    q.push(source);

    while(q.size() > 0){

        int curr = q.front();
        q.pop();

        for(auto neighbour : graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);                  //  marked visited.....
                
                distance[neighbour] = distance[curr] + 1;
            }
        }
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

        graph[source].push_back(destination);
        graph[destination].push_back(source);
    }

    cout<<"Enter the source node : ";
    int x;
    cin>>x;


    vector<int> distance;

    bfs(x, distance);

    for(int i=0; i<distance.size(); i++){
        cout<< i << " -> "<< distance[i] << endl;
    }


    return 0;
}


//  T.C = O(V + E).
//  S.C = O(V).
