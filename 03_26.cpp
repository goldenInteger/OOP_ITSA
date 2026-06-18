#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    if (cin >> a >> b >> c) {
        int sum = a + b + c;
        if (sum > 9) {
            cout << sum << " H\n";
        } else {
            cout << sum << " L\n";
        }
    }
    return 0;
}
