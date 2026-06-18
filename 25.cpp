#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    char comma;
    if (!(cin >> n >> comma >> m)) return 0;
    
    vector<vector<int>> grid(n, vector<int>(n, 0));
    
    int dr_cw[] = {0, 1, 0, -1};
    int dc_cw[] = {1, 0, -1, 0};
    
    int dr_ccw[] = {1, 0, -1, 0};
    int dc_ccw[] = {0, 1, 0, -1};
    
    int* dr = (m == 1) ? dr_cw : dr_ccw;
    int* dc = (m == 1) ? dc_cw : dc_ccw;
    
    int r = 0, c = 0, dir = 0;
    
    for (int i = 1; i <= n * n; ++i) {
        grid[r][c] = i;
        if (i == n * n) break;
        
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        
        if (nr < 0 || nr >= n || nc < 0 || nc >= n || grid[nr][nc] != 0) {
            dir = (dir + 1) % 4;
            nr = r + dr[dir];
            nc = c + dc[dir];
        }
        r = nr;
        c = nc;
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setfill('0') << setw(3) << grid[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
