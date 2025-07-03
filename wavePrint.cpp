#include<iostream>
#include<vector>
using namespace std;

void printWave(vector<vector<int>> arr, int n, int m) {
    for(int j = 0; j < m; j++) {
        if(j&1) {
            //odd index -> print bottom to top
            for(int i = n - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            //even index -> print top to bottom
            for(int i = 0; i < n; i++) {
                cout << arr[i][j] << " ";

            }
        }

    }
}

int main() {
    vector<vector<int>> arr(4, vector<int>(4));

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    printWave(arr, 4, 4);


    return 0;


}