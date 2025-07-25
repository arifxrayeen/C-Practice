#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n) {
        arr3[k] = arr1[i];
        k++;
        i++; 
    }
    while(j<m) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {3, 4, 6, 7, 9};
    int arr2[3] = {1, 2, 5};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);

    return 0;
}