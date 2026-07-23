#include<iostream>
using namespace std;
int main() {
    int factorial = 1, n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        factorial *= i;   // factorial = factorial * i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
    cout<< "The time complexity of code is O(n) and space complexity is O(1)" << endl;
    return 0;
}