#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    string p;
    cin >> n >> p >> t;
    
    for (int i = 0; i < n; i++) {
        cout << p[i];
        if ((i + 1) % t == 0 && i != n - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
