#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> zodiac = {
        "rat", "ox", "tiger", "rabbit", "dragon", "snake",
        "horse", "sheep", "monkey", "rooster", "dog", "pig"
    };
    
    int year;
    if (cin >> year) {
        int idx = (year - 2010) % 12;
        if (idx < 0) idx += 12;
        idx = (idx + 2) % 12;
        cout << zodiac[idx] << "\n";
    }
    
    return 0;
}
