// Program: Delete a key using hashmap

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
unordered_map<string, int> marks;

    marks["Ali"] = 85;
    marks["Sara"] = 90;
    marks["Areeba"] = 95;

    marks.erase("Areeba");
    for(auto x : marks) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}