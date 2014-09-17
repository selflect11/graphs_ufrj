// Weighted graph that ensures at least the minumum number of vertices and edges
#ifndef GRAPH_H
#define GRAPH_H

struct _Graph;
typedef struct _Graph Graph;

// The implementation HAVE to accept AT LEAST the number of vertices and edges
// It can ignore it if it is dyncamically allocated
Graph * graph_new(unsigned long vertices, unsigned long edges);

void graph_add_vertice(Graph *, unsigned long);
void graph_add_edge(Graph *, unsigned long, unsigned long, unsigned long);

// Default weight of 1
void graph_add_edge(Graph *, unsigned long, unsigned long);

#endif
