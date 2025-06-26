#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int, 4> nums = {2, 4, 5, 6};

    cout << "Element at 2nd index is-> " << nums.at(2) << endl;
    cout << "Empty or not-> " << nums.empty() << endl;
    
    cout << "first element is-> " << nums.front() << endl;
    cout << "last element is-> " << nums.back() << endl;
    
}