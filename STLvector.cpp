#include<iostream>
#include<vector>
using namespace std;
int main() {

    vector<int> v;

    vector<int> a(5, 1);

    vector<int> last(a);
    cout << "print last" << endl;
    for(int i:last) {
        cout << i << " ";

    }

    cout << "Capacity is ->" << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity is ->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity is ->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity is ->" << v.capacity() << endl;
    cout << "size is-> " << v.size() << endl;

    cout << "Element at 2nd index is-> " << v.at(2) << endl;
    cout << "Empty or not-> " << v.empty() << endl;
    
    cout << "first element is-> " << v.front() << endl;
    cout << "last element is-> " << v.back() << endl;

    cout << "before pop" << endl;
    for(int i:v) {
        cout << i << " ";

    }
    cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for(int i:v) {
        cout << i << " ";

    }
    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
    
}