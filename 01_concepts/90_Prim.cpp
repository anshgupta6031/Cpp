//  https://www.hackerrank.com/challenges/primsmstsub/problem

//  This algorithm is also used to find the minimum weight spanning tree in a given graph......


/*  Data structures used :- Visited set, priority_queue<pair<int,int>> (min heap), unordered_map.

Algorithm :-

- insert the pair of <0, src> in the pq.
- one by one remove the root element of the pq.
- if the root element is already visited, then we will just continue.
- we mark the root visited
- we store the wt of the pair in the ans
- go to every neighbour of the curr element, and only add those to the pq which are not visited or have a better wt proposition.
- update the mapping and parent....

*/


#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;


vector<list<pp>> gr;                            //  <node, wt>


void add_edge(int u, int v, int wt, bool bidir=true){
    gr[u].push_back({v, wt});

    if(bidir) {
        gr[v].push_back({u, wt});
    }
}


ll prims(int src, int n){

    priority_queue<pp, vector<pp> , greater<pp> > pq;              //  <wt, node>
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int, int> mp;                         //  <node, wt>

    for(int i = 1; i <= n; i++) {                   //  1 based indexing.........
        mp[i] = INT_MAX;
    }
    mp[src] = 0;

    pq.push({0, src});

    int total_count = 0;                // 0 -> n-1 edges
    int result = 0;                     // sum of wts

    while(total_count < n && !pq.empty()){
        pp curr = pq.top();

        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }

        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();

        for(auto neighbour : gr[curr.second]) {
            if(!vis.count(neighbour.first) && mp[neighbour.first] > neighbour.second) {
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;                         //  updating parent.....
                mp[neighbour.first] = neighbour.second;                     //  updating map....
            }
        }

    }

    return result;
}


int main(){
    int n, m;
    cin>>n>>m;

    gr.resize(n+1, list<pp>());

    while(m--) {
        int u, v, wt;
        cin>>u>>v>>wt;

        add_edge(u, v, wt);
    }

    int src;
    cin>>src;

    cout<<prims(src, n)<<"\n";
    
    return 0;
}


//  T.C = O((V+E).log V)


/*  Prim vs kruskal :-
    when no. of edges < no. of vertices, i.e, the graph is sparse, kruskal is prefered.
    when no. of edges > no. of vertices, i.e, the graph is dense, prim is prefered.
*/