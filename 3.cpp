#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;
    
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i] * arr[i];
    }
    
    cout << sum;
    return 0;
}
