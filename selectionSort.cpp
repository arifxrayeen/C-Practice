#include<iostream>
#include<vector>
using namespace std;


void sortArray(int nums[], int n) {
        for(int i=0; i<n-1; i++) {
            int minIndex = i;

            for(int j=i+1; j<n; j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
        
    }
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[5] = {10, 5, 6, 2, 100};
    
    sortArray(arr, 5);
    printArray(arr, 5);
    
    return 0;


    
}
    
