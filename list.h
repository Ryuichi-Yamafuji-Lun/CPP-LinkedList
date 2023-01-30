#include <iostream>
#define elements 10
using namespace std;

typedef struct _NODE 
{
    int key;
    int data;
    struct _NODE *next;
}NODE;

NODE *head = NULL;
NODE *tail;
NODE *tmp;