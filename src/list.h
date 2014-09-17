#ifndef LIST_H
#define LIST_H

struct _List;
typedef struct _List List;

List * list_new();
void list_prepend(List *, void *);
int list_is_empty(List *);
void * list_first(List *);
void * list_get(List *, int);

#endif
