#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Segment {
    int start;
    int end;
};

bool compareSegments(const Segment& a, const Segment& b) {
    if (a.start != b.start) {
        return a.start < b.start;
    }
    return a.end < b.end;
}

int main() {
    int m;
    if (!(cin >> m)) return 0;
    
    vector<Segment> segs(m);
    for (int i = 0; i < m; ++i) {
        cin >> segs[i].start >> segs[i].end;
        if (segs[i].start > segs[i].end) {
            swap(segs[i].start, segs[i].end);
        }
    }
    
    if (m == 0) {
        cout << "0\n";
        return 0;
    }
    
    sort(segs.begin(), segs.end(), compareSegments);
    
    long long total_length = 0;
    int cur_start = segs[0].start;
    int cur_end = segs[0].end;
    
    for (int i = 1; i < m; ++i) {
        if (segs[i].start <= cur_end) {
            cur_end = max(cur_end, segs[i].end);
        } else {
            total_length += (cur_end - cur_start);
            cur_start = segs[i].start;
            cur_end = segs[i].end;
        }
    }
    total_length += (cur_end - cur_start);
    
    cout << total_length << "\n";
    
    return 0;
}
