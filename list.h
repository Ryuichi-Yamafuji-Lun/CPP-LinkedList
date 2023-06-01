#ifndef LIST
#define LIST

#include <iostream>
using std::cout;
using std::cin;

typedef struct _NODE
{
    int key;
    int data;

    struct _NODE *next;
}NODE;

NODE *head = NULL;
NODE *tail;
NODE *temp;
#endif