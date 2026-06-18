#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int qing[5];
    for (int i = 0; i < 5; i++) {
        cin >> qing[i];
    }
    
    bool others[14] = {false};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            int card;
            cin >> card;
            others[card] = true;
        }
    }
    
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (others[qing[i]]) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
