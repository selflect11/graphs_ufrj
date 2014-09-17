#include "../src/list.h"
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

static void test_new_and_empty() {
  List * list = list_new();
  assert( list_is_empty(list) == 1 && "test_new_and_empty()" );
}

static void test_prepend(){
  List * list = list_new();
  int * i = malloc(sizeof(int));
  list_prepend(list, i);
  assert ( list_is_empty(list) == 0 && "test_prepend()" );
}

static void test_first(){
  List * list = list_new();
  int * i = malloc(sizeof(int));
  list_prepend(list, i);
  assert( list_first(list) == i && "test_first()" );
}

static void test_get_n(){
  List * list = list_new();
  int * i1 = malloc(sizeof(int));
  int * i2 = malloc(sizeof(int));
  list_prepend(list, i2);
  list_prepend(list, i1);
  assert( list_get(list, 0) == i1 && "test_get_n()" );
  assert( list_get(list, 1) == i2 && "test_get_n()" );
}

int main() {
  test_new_and_empty();
  test_prepend();
  test_first();
  test_get_n();
  return 0;
}
