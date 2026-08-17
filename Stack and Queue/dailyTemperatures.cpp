#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    int n = temperatures.size();

    vector<int> answer(n, 0);

    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {

            int previousDay = st.top();
            st.pop();

            answer[previousDay] = i - previousDay;
        }

        st.push(i);
    }

    for (int x : answer) {
        cout << x << " ";
    }

    return 0;
}