//Program: Remove Nth Node using Fast and Slow pointer in Linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert node at end
void insert(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Display list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Remove nth node from end
void removeNthFromEnd(Node*& head, int n) {

    Node dummy;
    dummy.next = head;

    Node* fast = &dummy;
    Node* slow = &dummy;

    // Move fast n+1 steps
    for (int i = 0; i <= n; i++) {
        if (fast == NULL) {
            cout << "Invalid value of n!" << endl;
            return;
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* del = slow->next;
    slow->next = del->next;
    delete del;

    head = dummy.next;
}

int main() {

    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    cout << "Original List: ";
    display(head);

    int n;
    cout << "Enter nth node from end to remove: ";
    cin >> n;

    removeNthFromEnd(head, n);

    cout << "Updated List: ";
    display(head);

    return 0;
}