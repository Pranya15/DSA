#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        for(int j = i; j < s.length(); j++) {

            string sub = s.substr(i, j - i + 1);

            if(sub[0] == sub[sub.length() - 1]) {
                cout << sub << endl;
                count++;
            }
        }
    }   
     

    cout << "Total count: " << count;

    return 0;
}