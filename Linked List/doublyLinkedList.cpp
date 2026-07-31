// Program: Insert At Beginnig using Doubly linked list
# include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;
void insertAtBeginning (int value) {
    Node* newNode = new Node();
 
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head ->prev = newNode;
    }
    head = newNode;
}

void display() {
    Node* temp = head;

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

cout << "Doubly Linked List: ";

while (temp != NULL) {
        cout << temp->data;

        if (temp->next != NULL)
            cout << " <-> ";

        temp = temp->next;
    }

    cout << " -> NULL" << endl;
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtBeginning(40);

    display();

    return 0;
}
