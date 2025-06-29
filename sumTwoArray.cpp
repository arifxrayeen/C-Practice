#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int sumArray[5];

    // Element-wise sum
    for (int i = 0; i < n; i++) {
        sumArray[i] = arr1[i] + arr2[i];
    }

    // Display result
    cout << "Sum of two arrays: ";
    for (int i = 0; i < n; i++) {
        cout << sumArray[i] << " ";
    }
    cout << endl;

    return 0;
}
