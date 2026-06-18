#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, p;
vector<int> coins;
vector<int> current;

void dfs(int idx, int sum) {
    if (sum == p) {
        cout << "(";
        for (int i = 0; i < n; ++i) {
            cout << current[i] << (i == n - 1 ? "" : ",");
        }
        cout << ")" << endl;
        return;
    }
    if (idx == n || sum > p) return;

    for (int count = 0; sum + count * coins[idx] <= p; ++count) {
        current[idx] = count;
        dfs(idx + 1, sum + count * coins[idx]);
    }
}

int main() {
    if (cin >> n) {
        coins.resize(n);
        current.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> coins[i];
        }
        cin >> p;
        
        dfs(0, 0);
    }
    return 0;
}
