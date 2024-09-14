//  Using DFS, find all the paths between any 2 given vertices in the graph....




#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;

vector<vector<int>> result;


void dfs(int curr, int end, vector<int>& path){

    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();                    //  backtracking......
        return;
    }

    visited.insert(curr);           //  marked visited.....
    path.push_back(curr);

    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour, end, path);
        }
    }

    visited.erase(curr);                    //  backtracking......
    path.pop_back();                        //  backtracking......

    return;
}


void all_path(int source, int destination){
    vector<int> path;
    dfs(source, destination, path);
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

    all_path(x, y);

    for(auto path : result){            //  printing all paths....
        for(auto ele : path){
            cout << ele << " ";
        }
        cout<<endl;
    }


    return 0;
}


