#include<iostream>
using namespace std;

bool isPresent(int arr[3][4], int target, int n, int m) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}
void printRowSum(int arr[3][4], int n, int m) {
    cout << "printing sum" << endl;
   
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];

        }
        cout << sum << " ";
    }
}
void printColSum(int arr[3][4], int n, int m) {
    cout << "printing sum" << endl;
   
    for(int j = 0; j < 4; j++) {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += arr[i][j];

        }
        cout << sum << " ";
    }
}


int main() {
    int arr[3][4];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element for search" << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element is not found" << endl;
    }

    printColSum(arr, 3, 4);
}