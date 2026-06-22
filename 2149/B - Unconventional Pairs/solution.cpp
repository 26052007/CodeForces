#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n;
    if (!(cin >> n)) return;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    long long max_diff = 0;
    for (int i = 0; i < n; i += 2) {
        long long current_diff = abs(a[i] - a[i + 1]);
        if (current_diff > max_diff) {
            max_diff = current_diff;
        }
    }
 
    cout << max_diff << endl;
}
 
int main() {
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}