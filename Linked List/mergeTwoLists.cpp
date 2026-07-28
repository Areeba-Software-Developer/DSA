//Program: Merge two singly linked lists

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* mergeLists(Node* p1, Node* p2)
{
    if (p1 == NULL)
        return p2;

    if (p2 == NULL)
        return p1;

    Node* head = NULL;
    Node* tail = NULL;

    if (p1->data <= p2->data) {
        head = p1;
        p1 = p1->next;
    } else {
        head = p2;
        p2 = p2->next;
    }

    tail = head;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data <= p2->data) {
            tail->next = p1;
            p1 = p1->next;
        } else {
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }

    if (p1 != NULL)
        tail->next = p1;

    if (p2 != NULL)
        tail->next = p2;

    return head;
}

int main()
{
    return 0;
}
