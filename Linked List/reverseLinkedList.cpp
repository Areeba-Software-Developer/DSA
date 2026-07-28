//Program: Reverse the linked List using Singly Linked List

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert node at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display the linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Reverse the linked list
void reverseList(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // Save next node
        current->next = prev;   // Reverse the link
        prev = current;         // Move prev forward
        current = next;         // Move current forward
    }

    head = prev;
}

int main() {
    Node* head = NULL;

    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\nOriginal Linked List:\n";
    display(head);

    reverseList(head);

    cout << "Reversed Linked List:\n";
    display(head);

    return 0;
}
