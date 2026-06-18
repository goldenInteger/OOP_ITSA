#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[101];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    int start, stop;
    cin >> start >> stop;
    
    int sum = 0;
    for (int i = start; i <= stop; i++) {
        sum += arr[i];
    }
    
    cout << sum;
    return 0;
}
