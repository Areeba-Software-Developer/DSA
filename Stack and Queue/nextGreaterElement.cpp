#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<int> arr = {4, 5, 2, 10, 8};

    int n = arr.size();

    vector<int> answer(n, -1);

    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && arr[i] > arr[st.top()]) {

            int index = st.top();
            st.pop();

            answer[index] = arr[i];
        }

        st.push(i);
    }

    for (int x : answer) {
        cout << x << " ";
    }

    return 0;
}