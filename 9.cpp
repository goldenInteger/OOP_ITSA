#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, digits = "";
    if (cin >> s) {
        for (char c : s) {
            if (isdigit(c)) {
                digits += c;
            }
        }
        sort(digits.begin(), digits.end());
        int min_val = stoi(digits);
        
        reverse(digits.begin(), digits.end());
        int max_val = stoi(digits);
        
        cout << max_val - min_val << endl;
    }
    return 0;
}
