#include<iostream>
using namespace std;
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSortArray(int arr[], int n) {
    for(int i = 1; i < n; i++) {

        for(int j = 0; j <n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main() {
    int arr[5] = {10, 5, 6, 2, 100};
    
    bubbleSortArray(arr, 5);
    printArray(arr, 5);
    return 0;

}