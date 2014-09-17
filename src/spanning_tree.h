#ifndef SPANNING_TREE_H
#define SPANNING_TREE_H

#include "graph.h"

struct _SpanningTree;
typedef struct _SpanningTree SpanningTree;

// Creates a spanning tree for at least n nodes
SpanningTree * spanning_tree_new(VERTEX_T);
void spanning_tree_set_father(VERTEX_T, VERTEX_T);
VERTEX_T spanning_tree_get_father(VERTEX_T);

#endif
