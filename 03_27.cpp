#include <iostream>

using namespace std;

int main() {
    int m, n;
    if (cin >> m >> n) {
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << i << "x" << j << "=" << i * j << "\n";
            }
        }
    }
    return 0;
}
