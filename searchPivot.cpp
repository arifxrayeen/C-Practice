#include<iostream>
using namespace std;
int getPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;

    while(start<end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;

    }
    return start;

}

int main() {
    int nums[5] = {7, 8, 9, 1, 3};
    int index = getPivot(nums, 5);

    cout << "pivot index is " << index << endl;
    return 0;

}
    