# About

This is a project for Graph Theory class @ UFRJ. No code here is intended to be used in a commercial way, be careful.

This is not a microlibrary, so I'll implement a lot of basic data structure, it is not just graph libraries that depends on data structure libraries.

## Basic data structures

### List

It is a simple linked list with reference to first element.

Creating a new list _O(1)_:

```c
List * list = list_new();
```

Checking list emptiness _O(1)_:

```c
list_is_empty(list); // => 1
```

Prepending elements to the list _O(1)_:

```c
void * data; //Inilialize it at somepoint
list_prepend(list, data);
liss_is_empty(list); // => 0
```

Get the first element of the list (the head) _O(1)_:
```c
list_first(list) // => data
```

Get the the nth element _O(n)_:

```c
list_prepend(list, another_data);
list_prepend(list, first_data);
list_get(list,1); // => another_data
```

