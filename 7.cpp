#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x[1000];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int count = 0;
    int i = 0, j = n - 1;
    long long prefix = x[0], suffix = x[n - 1];
    
    while (i < n && j >= 0) {
        if (prefix == suffix) {
            count++;
            i++;
            j--;
            if (i < n) prefix += x[i];
            if (j >= 0) suffix += x[j];
        } else if (prefix < suffix) {
            i++;
            if (i < n) prefix += x[i];
        } else {
            j--;
            if (j >= 0) suffix += x[j];
        }
    }
    
    cout << count;
    return 0;
}
