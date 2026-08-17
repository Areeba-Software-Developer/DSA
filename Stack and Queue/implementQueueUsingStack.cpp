#include <iostream>
#include <stack>
using namespace std;

stack<int> s1;
stack<int> s2;

void push(int x) {
    s1.push(x);
}

void pop() {

    if (s2.empty()) {

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    if (!s2.empty()) {
        s2.pop();
    }
}

int front() {

    if (s2.empty()) {

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    return s2.top();
}

int main() {

    push(10);
    push(20);
    push(30);

    cout << "Front: " << front() << endl;

    pop();

    cout << "After pop:" << endl;
    cout << "Front: " << front() << endl;

    pop();

    cout << "After another pop:" << endl;
    cout << "Front: " << front() << endl;

    return 0;
}