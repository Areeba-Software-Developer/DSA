//Program: Remove Duplicate with Hashset
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 3, 4, 4, 5};

    unordered_set<int> s;

    for (int i = 0; i < 7; i++) {
        s.insert(arr[i]);
    }

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}