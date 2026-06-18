#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    char op;
    if (!(cin >> n >> op)) return 0;
    
    vector<vector<int>> matrix(n, vector<int>(n));
    int val = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = val++;
        }
    }
    
    vector<vector<int>> res(n, vector<int>(n));
    if (op == 'R') {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                res[j][n - 1 - i] = matrix[i][j];
            }
        }
    } else if (op == 'L') {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                res[n - 1 - j][i] = matrix[i][j];
            }
        }
    } else if (op == 'F') {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                res[n - 1 - i][j] = matrix[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << res[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
