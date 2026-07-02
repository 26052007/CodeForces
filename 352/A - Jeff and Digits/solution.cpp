#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count0 = 0, count5 = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 0) {
            count0++;
        } else if (a == 5) {
            count5++;
        }
    }
    
    if (count0 == 0) {
        cout << -1 << "
";
    } else if (count5 < 9) {
        cout << 0 << "
";
    } else {
        int max_fives = (count5 / 9) * 9;
        for (int i = 0; i < max_fives; ++i) {
            cout << 5;
        }
        for (int i = 0; i < count0; ++i) {
            cout << 0;
        }
        cout << "
";
    }
    
    return 0;
}