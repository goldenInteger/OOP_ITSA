#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    if (cin >> s >> t) {
        if (t.find(s) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
