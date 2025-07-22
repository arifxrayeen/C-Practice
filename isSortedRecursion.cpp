#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    //base case
    if(size == 0 || size == 1) {
        return true;  //sorted hai
    }
    if(arr[0] > arr[1]) {
        return false;  //sorted nhi hai
    }
    else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart; 
    }
}
int main() {
    int arr[] = {2, 5, 7, 8, 10};
    int n = 5;
    bool ans = isSorted(arr, n);
    if(ans) {
        cout << "array is sorted" << endl;
    }
    else {
        cout << "array is not sorted" << endl;
    }
}