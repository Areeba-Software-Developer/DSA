#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 3};
    int n = 3;
    int k = 3;

    unordered_map<int, int> mp;

    mp[0] = 1;  

    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {

        prefixSum += arr[i];

        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }

        mp[prefixSum]++;
    }

    cout << "Total Subarrays = " << count;

    return 0;
}