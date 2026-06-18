#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> scores(n);
        int max_val = -1, min_val = 101, sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> scores[i];
            if (scores[i] > max_val) max_val = scores[i];
            if (scores[i] < min_val) min_val = scores[i];
            sum += scores[i];
        }
        
        double avg = (double)sum / n;
        int pass_count = 0;
        for (int i = 0; i < n; ++i) {
            if (scores[i] > avg) {
                pass_count++;
            }
        }
        
        cout << "Max:" << max_val << endl;
        cout << "Min:" << min_val << endl;
        cout << "Average:" << fixed << setprecision(1) << avg << endl;
        cout << "Pass:" << pass_count << endl;
    }
    return 0;
}
