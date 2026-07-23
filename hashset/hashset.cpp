#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<int> numbers;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(20);   

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}