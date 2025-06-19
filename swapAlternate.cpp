#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size){
        
            swap(arr[i], arr[i+1]);
        }
    }
}
int main() {
    int odd[5] = {5, 4, 1, 7, 2};
    int even[6] = {2, 4, 1, 0, 8, 5};

    swapAlternate(odd, 5);
    printArray(odd, 5);

    swapAlternate(even, 6);
     printArray(even, 6);

    return 0;
}