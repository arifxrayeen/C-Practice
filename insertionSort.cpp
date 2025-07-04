#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];  
            j--;
        }

        arr[j + 1] = temp; 
    }
}

int main() {
    int arr[5] = {10, 5, 6, 2, 100};

    insertionSort(arr, 5);
    printArray(arr, 5);

    return 0;
}
