# About

This is a project for Graph Theory class @ UFRJ. No code here is intended to be used in a commercial way, be careful.

This is not a microlibrary, so I'll implement a lot of basic data structure, it is not just graph libraries that depends on data structure libraries.

## Basic data structures

### List

It is a simple linked list with reference to first element.

Creating a new list:

    List * list = list_new();

Checking list emptiness:

    List * list = list_new();
    list_is_empty(list); // => 1

Prepending elements to the list

    List * list = list_new();
    void * data; //Inilialize it at somepoint
    list_prepend(list, data);
    liss_is_empty(list); // => 0
