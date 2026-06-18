#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int m;
    cin >> m;
    nums.push_back(m);
    
    sort(nums.begin(), nums.end());
    
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ",";
    }
    cout << "\n";
    
    return 0;
}
