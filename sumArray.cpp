#include<iostream>
using namespace std;

int SumArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin >> size;

    int num[100];
    for(int i=0; i<size; i++) {
        cin >> num[i];
    }
    cout << "Sum of all elements in an array is  " << SumArray(num, size) << endl;
    return 0;
}