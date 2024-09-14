/*  Q)
    Given an unweighted, undirected graph, a source and destination node.
    Find all nodes which come in at least one shortest path from source to destination.
*/







/*  Sol)
->  Using bfs, find the shortest distance to all the nodes from the source node and store it in an array d1.
->  Using bfs, find the shortest distance to all the nodes from the destination node and store it in an array d2.
->  Now, the nodes which have (d1[i] + d2[i] = shortest distance from source to destination) are the nodes which come in at least one shortest path from source to destination.
*/