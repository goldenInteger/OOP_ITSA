#include <iostream>
#include <string>

using namespace std;

int main() {
    string n, m;
    if (cin >> n >> m) {
        int count = 0;
        size_t pos = m.find(n, 0);
        while (pos != string::npos) {
            count++;
            pos = m.find(n, pos + 1);
        }
        cout << count << endl;
    }
    return 0;
}
