#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";


    if (str1.length() != str2.length()) {
        cout << "Not anagram";
        return 0;
    }

    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    
    if (str1 == str2) {
        cout << "Anagram";
    } else {
        cout << "Not anagram";
    }

    return 0;
}