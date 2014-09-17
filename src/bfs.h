#ifndef BFS_H
#define BFS_H

#include "graph.h"
#include "spanning_tree.h"

// Full BFS
SpanningTree bfs_full(Graph *, int);

// BFS between two vertices
Path bfs(Graph *, int, int);

#endif
