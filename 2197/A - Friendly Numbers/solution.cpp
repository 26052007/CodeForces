#include <iostream>
 
using namespace std;
 
/**
 * Function to calculate the sum of digits of a number n.
 */
int sum_of_digits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
 
void solve() {
    long long x;
    if (!(cin >> x)) return;
 
    // A number minus its sum of digits is always a multiple of 9.
    // If x is not a multiple of 9, no such y exists.
    if (x % 9 != 0) {
        cout << 0 << endl;
        return;
    }
 
    int count = 0;
    /* Since y = x + d(y) and the max sum of digits for numbers 
       around 10^9 is roughly 81-90, we only need to check 
       a small range above x.
    */
    for (long long y = x + 1; y <= x + 100; ++y) {
        if (y - sum_of_digits(y) == x) {
            count++;
        }
    }
 
    cout << count << endl;
}
 
int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}