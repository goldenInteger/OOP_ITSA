#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums(3);
    if (!(cin >> nums[0] >> nums[1] >> nums[2])) return 0;
    
    string order;
    cin >> order;
    
    sort(nums.begin(), nums.end());
    
    if (order == "Asc") {
        cout << nums[0] << "<" << nums[1] << "<" << nums[2] << "\n";
    } else {
        cout << nums[2] << ">" << nums[1] << ">" << nums[0] << "\n";
    }
    
    return 0;
}
