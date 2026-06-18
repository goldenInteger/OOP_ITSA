#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    string s;
    if (cin >> s) {
        int max_prime = -1;
        int len = s.length();
        
        for (int i = 0; i < len; ++i) {
            for (int k = 1; i + k <= len; ++k) {
                int val = stoi(s.substr(i, k));
                if (is_prime(val)) {
                    max_prime = max(max_prime, val);
                }
            }
        }
        
        if (max_prime == -1) {
            cout << "No prime found" << endl;
        } else {
            cout << max_prime << endl;
        }
    }
    return 0;
}
