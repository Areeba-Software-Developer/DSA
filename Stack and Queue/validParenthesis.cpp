#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        // Opening brackets
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }

        // Closing brackets
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {

                st.pop();
            }
            else {
                return false;
            }
        }
    }

    // Stack must be empty
    return st.empty();
}

int main() {

    string s = "([{})";

    if (isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}