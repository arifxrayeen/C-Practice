#include<iostream>
using namespace std;

string findReplaceSpaces(string s) {

    string temp = "";
    for(int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');


        }
        else {
            temp.push_back(s[i]);
        }
       
    }
     return temp;
}
void printArray(string s) {
    for(int i=0; i<s.length(); i++) {
        cout << s[i];
    }
    cout << endl;
}

int main() {
    string s;
    getline(cin, s);
    string result = findReplaceSpaces(s);
    printArray(result);

}