#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            long long ans = 1;
            for (int i = 1; i <= n; ++i) {
                ans *= i;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
