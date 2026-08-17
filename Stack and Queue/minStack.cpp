#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
stack<int> minSt;

void push(int x) {

    st.push(x);

    if (minSt.empty() || x <= minSt.top()) {
        minSt.push(x);
    }
}

void pop() {

    if (st.top() == minSt.top()) {
        minSt.pop();
    }

    st.pop();
}

int top() {
    return st.top();
}

int getMin() {
    return minSt.top();
}

int main() {

    push(5);
    push(3);
    push(7);
    push(2);

    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    pop();

    cout << "After pop:" << endl;
    cout << "Top: " << top() << endl;
    cout << "Minimum: " << getMin() << endl;

    return 0;
}