#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int counts[5] = {0}; // 優等, 甲等, 乙等, 丙等, 不及格
        for (int i = 0; i < n; ++i) {
            int score;
            cin >> score;
            if (score >= 90) counts[0]++;
            else if (score >= 80) counts[1]++;
            else if (score >= 70) counts[2]++;
            else if (score >= 60) counts[3]++;
            else counts[4]++;
        }
        
        cout << "優等 " << counts[0] << endl;
        cout << "甲等 " << counts[1] << endl;
        cout << "乙等 " << counts[2] << endl;
        cout << "丙等 " << counts[3] << endl;
        cout << "不及格 " << counts[4] << endl;
    }
    return 0;
}
