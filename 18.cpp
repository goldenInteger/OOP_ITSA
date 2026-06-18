#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    string s;
    if (getline(cin, s)) {
        vector<int> counts(26, 0);
        for (char c : s) {
            if (isalpha(c)) {
                counts[tolower(c) - 'a']++;
            }
        }
        
        for (int i = 0; i < 26; ++i) {
            cout << counts[i] << (i == 25 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
