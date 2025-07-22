#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k) {
    //base case
    //element not found
    if(s>e){
        return false;
    }
    int mid = s + (e - s) / 2;
    //element found 
    if(arr[mid] == k) {
        return true;
    }
    if(arr[mid] < k) {  //search in right part
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main () {
    int arr[6] = {4, 6, 8, 11, 15, 19};
    int size = 6;
    int key = 19;

    cout << "present or not " << binarySearch(arr, 0, 5, 19) << endl;

    
}