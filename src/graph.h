// Weighted graph that ensures at least the minumum number of vertices and edges
#ifndef GRAPH_H
#define GRAPH_H

#define VERTEX_T unsigned long
#define WEIGHT_T unsigned long

struct _Graph;
typedef struct _Graph Graph;

// The implementation HAVE to accept AT LEAST the number of vertices and edges
// It can ignore it if it is dyncamically allocated
Graph * graph_new(VERTEX_T vertices, unsigned long long edges);

void graph_add_vertice(Graph *, VERTEX_T);
void graph_add_edge(Graph *, VERTEX_T, VERTEX_T, WEIGHT_T);

// Default weight of 1
void graph_add_edge(Graph *, VERTEX_T, VERTEX_T);

#endif
