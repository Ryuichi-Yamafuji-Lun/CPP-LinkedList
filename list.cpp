#include <iostream>
#include "list.h"

void createLinked(int elements);
void printList();
int main()
{
    int elements;
    cout << "Number of elements in the linked list: ";
    cin >> elements;
    cout << std::endl;
    createLinked(elements);
    cout << "Linked List Results:  \n";
    printList();
    return 0;
}

void createLinked(int elements)
{
    for(int i = 0; i < elements; i++)
    {
        temp = new NODE;
        temp->key = i;
        cout << "Data for element: " << i << std::endl;
        cin >> temp->data;
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else 
        {
            tail->next = temp;
            tail = temp;
        }
    }
}

void printList()
{
    temp = head;
    while(temp != NULL)
    {
        cout << "Key: " << temp->key << " Data: " << temp->data << "\n";
        temp = temp->next;
    }
}