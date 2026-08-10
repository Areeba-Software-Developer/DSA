// Program: Find the target sum in an array using the two-pointer technique
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int nums[] = {3, 2, 4};
    int target = 6;
    int n = 3;

    // Sort first
    sort(nums, nums + n);

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = nums[left] + nums[right];

        if (sum == target) {
            cout << "Target found";
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}