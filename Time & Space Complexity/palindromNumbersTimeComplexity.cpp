#include<iostream>
using namespace std;
int main() {
    int n;
    bool isPalindrome = true;
    cout << "Enter a number: ";
    cin >> n;
    int originalNumber = n;
    int reversedNumber = 0;

    for (int i = n; i > 0; i /= 10) {
        int digit = i % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    if (originalNumber == reversedNumber) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    cout << "The time complexity of this code is O(log n)." << endl;

    return 0;
}