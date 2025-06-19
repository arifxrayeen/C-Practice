#include<iostream>
using namespace std;

bool Search(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[5] = {5, -2, 3, 6, 7};

    cout << "Enter the element for searching" << endl;
    int key;
    cin >> key;

    bool found = Search(arr, 5, key);
    if( found ) {
        cout << "Element is present" << endl;
    }
    else{
        cout << "Element is not present" << endl;
    }
    return 0;
}