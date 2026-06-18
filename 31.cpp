#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareStrings(const string& a, const string& b) {
    return a + b > b + a;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<string> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end(), compareStrings);
    
    for (const auto& s : nums) {
        cout << s;
    }
    cout << "\n";
    
    return 0;
}
