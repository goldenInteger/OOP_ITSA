#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int k;
    if (cin >> k) {
        vector<int> items(k);
        int total_sum = 0;
        for (int i = 0; i < k; ++i) {
            cin >> items[i];
            total_sum += items[i];
        }
        
        int target = total_sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        
        for (int weight : items) {
            for (int j = target; j >= weight; --j) {
                if (dp[j - weight]) {
                    dp[j] = true;
                }
            }
        }
        
        int close_sum = 0;
        for (int j = target; j >= 0; --j) {
            if (dp[j]) {
                close_sum = j;
                break;
            }
        }
        
        cout << total_sum - 2 * close_sum << endl;
    }
    return 0;
}
