#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> timeline(25, 0);
        for (int i = 0; i < n; ++i) {
            int s, d;
            cin >> s >> d;
            for (int t = s; t < d; ++t) {
                timeline[t]++;
            }
        }
        
        int max_cars = 0;
        for (int i = 0; i <= 24; ++i) {
            max_cars = max(max_cars, timeline[i]);
        }
        
        cout << max_cars << endl;
    }
    return 0;
}
