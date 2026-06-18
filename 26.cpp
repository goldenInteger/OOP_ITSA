#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    if (!(cin >> r >> c)) return 0;
    
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    for (int j = 0; j < c; ++j) {
        for (int i = 0; i < r; ++i) {
            cout << matrix[i][j];
            if (i < r - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
