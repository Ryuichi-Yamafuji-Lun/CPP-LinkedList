#include <iostream>
using namespace std;
//node structure
struct node {
    int data;
    struct node *next;
};

int main() {
    // 100 elements
    struct node *head, *tail, *tmp;
    head = NULL;

    for (int i = 1; i <= 100; i++)
    {
        //tmp pointer
        //allocate memory for node
        tmp = new node;
        tmp->data = i;
        tmp->next = NULL;
        //create head if it doesnt exist
        if (head == NULL) {
            head = tmp;
            tail = tmp;
        }
        //connect and create new node
        else {
            tail->next = tmp;
            tail = tmp;          
        }
    }
    //print linked list
    while (head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
    exit(0);
}