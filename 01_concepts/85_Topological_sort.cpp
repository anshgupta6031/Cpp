//  topological sorting is a dependency based sorting.....
//  topological sort by BFS is done using Kahn's algorithm.




#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;                  //  no. of vertices....


void add_edge(int x, int y, bool bidir = true){
    graph[x].push_back(y);

    if(bidir) graph[y].push_back(x);
}


void topoBFS(){

    vector<int> indegree(v, 0);
    for(int i=0; i<v; i++){
        for(auto neighbour : graph[i]){
            indegree[neighbour]++;
        }
    }


    queue<int> q;
    unordered_set<int> visited;

    for(int i=0; i<v; i++){
        if(indegree[i] == 0){
            q.push(i);
            visited.insert(i);
        }
    }

    cout<<endl<< "The visited nodes are :-"<<endl;

    while(q.size()>0){                  //  multisource bfs.....

        int curr = q.front();
        q.pop();

        cout<< curr << " ";

        for(auto neighbour : graph[curr]){
            if(!visited.count(neighbour)){
                indegree[neighbour]--;

                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}


int main(){

    cout<<"Enter the no. of vertices : ";
    cin>>v;

    int e;
    cout<<"Enter the no. of edges : ";
    cin>>e;

    graph.resize(v, list<int>());

    cout<<"Enter edges :- "<<endl;

    while(e--){
        int x, y;
        cin>>x>>y;

        add_edge(x, y, false);
    }

    
    topoBFS();
    
    return 0;
}




//  T.C = O(V+E).
//  S.C = O(V).



/*  Use cases :-

    1)  Dependency resolution in directed graphs.
    2)  Cycle detection in a directed graph.
*/