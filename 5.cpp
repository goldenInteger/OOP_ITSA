#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[200];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++) {
        cout << arr[i] - arr[i - 1] << " ";
    }
    
    return 0;
}
