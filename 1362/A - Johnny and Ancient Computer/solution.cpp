#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        unsigned long long a, b;
        cin >> a >> b;
 
        if (a == b) {
            cout << 0 << '
';
            continue;
        }
 
        unsigned long long x;
 
        if (a > b) {
            if (a % b != 0) {
                cout << -1 << '
';
                continue;
            }
            x = a / b;
        } else {
            if (b % a != 0) {
                cout << -1 << '
';
                continue;
            }
            x = b / a;
        }
 
        if ((x & (x - 1)) != 0) {
            cout << -1 << '
';
            continue;
        }
 
        int k = 0;
        while (x > 1) {
            x >>= 1;
            k++;
        }
 
        cout << k / 3 + (k % 3) / 2 + (k % 3) % 2 << '
';
    }
 
    return 0;
}