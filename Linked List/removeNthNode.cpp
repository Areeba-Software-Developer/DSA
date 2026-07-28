//Program: Remove Nth Node from the linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

// Delete node by value
void deleteNode(Node*& head, int key)
{
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            // Delete first node
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            delete temp;
            return;
        }

        prev = temp;
        temp = temp->next;
    }
}

int main()
{
    return 0;
}