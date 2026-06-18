#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    if (cin >> x) {
        double total_c = 0, total_e = 0, total_m = 0;
        for (int i = 0; i < x; ++i) {
            double c, e, m;
            cin >> c >> e >> m;
            total_c += c;
            total_e += e;
            total_m += m;
        }
        
        double avg_all = (total_c + total_e + total_m) / (x * 3);
        double avg_c = total_c / x;
        double avg_e = total_e / x;
        double avg_m = total_m / x;
        
        cout << fixed << setprecision(1) 
             << avg_all << " " << avg_c << " " << avg_e << " " << avg_m << endl;
    }
    return 0;
}
