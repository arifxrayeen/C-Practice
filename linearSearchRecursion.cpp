#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k) {
    //base case
    if(size == 0) {
        return false;  //element not found
    }
    if(arr[0] == k) {
        return true;  //element found
    }
    else {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}
int main() {
    int arr[5] = {5, 7, 8, 1, 0};
    int n = 5;
    int k = 0;

    bool ans = linearSearch(arr, n, k);
    if(ans) {
        cout << "element found" << endl;
    }
    else {
        cout << "element not found" << endl;
    }
}