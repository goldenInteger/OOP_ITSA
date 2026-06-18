#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Match {
    int score;
    int b;
    int g;
};

bool compareMatches(const Match& a, const Match& b) {
    return a.score > b.score;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<Match> all_matches;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int score;
            cin >> score;
            all_matches.push_back({score, i, j});
        }
    }
    
    sort(all_matches.begin(), all_matches.end(), compareMatches);
    
    vector<bool> boy_used(n + 1, false);
    vector<bool> girl_used(n + 1, false);
    vector<Match> result;
    
    for (const auto& m : all_matches) {
        if (!boy_used[m.b] && !girl_used[m.g]) {
            boy_used[m.b] = true;
            girl_used[m.g] = true;
            result.push_back(m);
        }
    }
    
    for (const auto& m : result) {
        cout << "boy " << m.b << " pair with girl " << m.g << "\n";
    }
    
    return 0;
}
