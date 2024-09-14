//  This algorithm is used to find the shortest path from the source to each node in terms of sum of edge weights......



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


unordered_map<int,int> dijkstra(int src, int n){

    priority_queue<pp, vector<pp> , greater<pp> > pq;              //  <dis, node>
    unordered_set<int> vis;
    vector<int> via(n);
    unordered_map<int, int> mp;                         //  <node, dis>

    for(int i = 0; i < n; i++) {            //  O(V)
        mp[i] = INT_MAX;
    }
    mp[src] = 0;

    pq.push({0, src});

    while(!pq.empty()){                         //  O((V+E).log V)
        pp curr = pq.top();

        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }

        vis.insert(curr.second);
        pq.pop();

        for(auto neighbour : gr[curr.second]) {
            if(!vis.count(neighbour.first) && mp[neighbour.first] > neighbour.second + mp[curr.second]) {
                pq.push({neighbour.second + mp[curr.second], neighbour.first});
                via[neighbour.first] = curr.second;                         //  updating via.....
                mp[neighbour.first] = neighbour.second + mp[curr.second];                     //  updating map....
            }
        }

    }

    return mp;
}


int main(){
    int n, m;
    cin>>n>>m;

    gr.resize(n, list<pp>());

    while(m--) {
        int u, v, wt;
        cin>>u>>v>>wt;

        add_edge(u, v, wt);
    }

    int src;
    cin>>src;

    unordered_map<int,int> result = dijkstra(src, n);

    cout<<endl<<endl;
    for(int i=0; i<result.size(); i++){
        cout << i <<" ";
        (result[i]==INT_MAX)? cout<<-1<<endl : cout<<result[i]<<endl;
    }
    
    return 0;
}


//  T.C = O((V+E).log V)