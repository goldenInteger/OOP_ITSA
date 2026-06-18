#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    string dummy;
    getline(cin, dummy);
    
    string s;
    if (!getline(cin, s)) return 0;
    
    vector<string> words;
    stringstream ss(s);
    string w;
    while (ss >> w) {
        words.push_back(w);
    }
    
    if (words.empty()) return 0;
    
    vector<string> lines;
    string cur = words[0];
    
    for (size_t i = 1; i < words.size(); ++i) {
        string next_w = words[i];
        
        if (cur.length() + 1 + next_w.length() <= (size_t)n) {
            cur += " " + next_w;
        } else if (cur.length() + 1 == (size_t)n) {
            lines.push_back(cur + " ");
            cur = next_w;
        } else {
            size_t rem = n - cur.length();
            if (rem >= 2 && next_w.length() > 1) {
                size_t cut = rem - 1;
                if (cut < next_w.length()) {
                    lines.push_back(cur + " " + next_w.substr(0, cut) + "-");
                    cur = next_w.substr(cut);
                } else {
                    lines.push_back(cur);
                    cur = next_w;
                }
            } else {
                lines.push_back(cur);
                cur = next_w;
            }
        }
    }
    lines.push_back(cur);
    
    for (const auto& line : lines) {
        string out = line;
        if (out.length() < (size_t)n) {
            out.append(n - out.length(), ' ');
        }
        cout << out << "\n";
    }
    
    return 0;
}
