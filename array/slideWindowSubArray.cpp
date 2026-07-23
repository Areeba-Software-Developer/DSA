#include <iostream>
using namespace std;

int main() {
    int arr[] ={12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;

    // Calculate first window sum
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < size; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;

    return 0;
}