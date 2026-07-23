#include <iostream>
using namespace std;
int main() {
    int sum = 0, n;
    string str;
    cout << "Enter two numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    cout << "The time complexity of this code is O(n)." << endl;
    return 0;
}