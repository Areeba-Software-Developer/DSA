//Program: Inttersection of Two Lists using Fast and Slow in Linked List 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Find intersection node
Node* getIntersection(Node* head1, Node* head2) {

    Node* p1 = head1;
    Node* p2 = head2;

    while (p1 != p2) {

        if (p1 == NULL)
            p1 = head2;
        else
            p1 = p1->next;

        if (p2 == NULL)
            p2 = head1;
        else
            p2 = p2->next;
    }

    return p1;    // Either intersection node or NULL
}

int main() {

    // Common part
    Node* common1 = new Node{40, NULL};
    Node* common2 = new Node{50, NULL};
    common1->next = common2;

    // First list
    Node* head1 = new Node{10, NULL};
    head1->next = new Node{20, NULL};
    head1->next->next = new Node{30, NULL};
    head1->next->next->next = common1;

    // Second list
    Node* head2 = new Node{15, NULL};
    head2->next = new Node{25, NULL};
    head2->next->next = common1;

    Node* ans = getIntersection(head1, head2);

    if (ans != NULL)
        cout << "Intersection Node = " << ans->data << endl;
    else
        cout << "No Intersection Found!" << endl;

    return 0;
}