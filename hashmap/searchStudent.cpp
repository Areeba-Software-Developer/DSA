//Program: Search a Student using Hashmap

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> marks;

    marks["Ali"] = 85;
    marks["Sara"] = 90;
    marks["Areeba"] = 95;

    string name;
    cout << "Enter Name: ";
    cin >> name;

    if (marks.find(name) != marks.end()) {
        cout << "Marks = " << marks[name];
    }
    else {
        cout << "Student Not Found";
    }

    return 0;
}