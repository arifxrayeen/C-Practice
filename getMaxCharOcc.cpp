#include <iostream>
#include <string>
using namespace std;

char getMaxOccCharacter(string s) {
    int freq[26] = {0}; 

    
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]); 

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; 
        }
    }

    
    int maxCount = 0;
    int index = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            index = i;
        }
    }

    
    return 'a' + index;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = getMaxOccCharacter(input);
    cout << "Most frequent character: " << result << endl;

    return 0;
}
