// Program: Find the target sum in an array using the sliding window technique
#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 2, 4};
    int target = 6;
    int n = 3;

    int left = 0;
    int sum = 0;

    for (int right = 0; right < n; right++) {
        sum = sum + nums[right];

        while (sum > target && left <= right) {
            sum = sum - nums[left];
            left++;
        }

        if (sum == target) {
            cout << "Target found from index " << left << " to " << right;
            cout << '\n';
            return 0;
        }
    }

    cout << "Target not found\n";
    return 0;
}
