#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string a;
    int b;
    char comma;
    if (!(cin >> a >> comma >> b)) return 0;
    
    vector<char> s;
    int to_remove = b;
    
    for (char c : a) {
        while (to_remove > 0 && !s.empty() && s.back() > c) {
            s.pop_back();
            to_remove--;
        }
        s.push_back(c);
    }
    
    while (to_remove > 0 && !s.empty()) {
        s.pop_back();
        to_remove--;
    }
    
    string res = "";
    bool leading_zero = true;
    for (char c : s) {
        if (c == '0' && leading_zero) continue;
        leading_zero = false;
        res += c;
    }
    
    if (res.empty()) cout << "0\n";
    else cout << res << "\n";
    
    return 0;
}
