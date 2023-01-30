#include "list.h"

int main() {

    for (int i = 1; i <= elements; i++)
    {
        //tmp pointer
        //allocate memory for node
        tmp = new NODE;
        tmp->key = i;
        cout << "Input Data: " << endl;
        cin >> tmp->data;
        tmp->key = i;
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
    cout << "linked list results" << endl;
    //print linked list
    while (head != NULL){
        cout << "Key: " << head->key <<  " Data: " << head->data << endl;
        head = head->next;
    }
    exit(0);
}