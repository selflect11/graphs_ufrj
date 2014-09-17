#include "list.h"
#include <stdlib.h>
// Data Structure

typedef struct _ListNode {
  void * data;
  struct _ListNode * next;
} ListNode;

struct _List {
  ListNode * head;
};

// Private

ListNode * list_create_node(void * data){
  ListNode * node = malloc(sizeof(ListNode));
  node->data = data;
  node->next = 0;
  return node;
};

// Public

List * list_new(){
  List * list = (List*) malloc(sizeof(List));
  list->head = 0;
  return list;
};

int list_is_empty(List * list) {
  return !(list && list->head);
};

void list_prepend(List * list, void * data){
  ListNode * head = list->head;
  list->head = list_create_node(data);
  list->head->next = head;
};

void * list_first(List * list) {
  return list->head->data;
};

void * list_get(List * list, int index) {
  ListNode * curr = list->head;
  while(index-- > 0) curr = curr->next;
  return curr->data;
};
