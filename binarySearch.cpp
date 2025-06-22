#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;

    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        }
        // if key is greater than arr[mid] then go right
        if(key > arr[mid]) {
            start = mid+1;
        }
        else { // key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end-start)/2;
       
    }
    return -1;
}

int main() {
    int even[6] = {5, 7, 8, 10, 22, 26};
    int odd[5] = {2, 5, 6, 7, 8};

    int evenIndex = binarySearch(even, 6, 8);
    cout << "index is " << evenIndex << endl;

    int oddIndex = binarySearch(even, 5, 100);
    cout << "index is " << oddIndex << endl;

    return 0;
}