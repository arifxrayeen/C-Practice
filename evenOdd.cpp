#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 13, 22, 7};
    int n = 5, even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}
