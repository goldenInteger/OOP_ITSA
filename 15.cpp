#include <iostream>
#include <map>

using namespace std;

int main() {
    int num;
    map<int, int> counts;
    while (cin >> num) {
        counts[num]++;
    }
    
    for (auto const& [val, count] : counts) {
        if (count % 3 != 0) {
            cout << val << endl;
            break;
        }
    }
    return 0;
}
