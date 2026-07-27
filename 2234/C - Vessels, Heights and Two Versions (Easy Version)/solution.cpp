#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
 
    vector<long long> R(n), L(n);
    for (int i = 0; i < n; i++) {
        long long max_R = 0;
        for (int step = 1; step < n; step++) {
            int prev = (i + step - 1) % n;
            int curr = (i + step) % n;
            max_R = max(max_R, h[prev]);
            R[curr] = max_R;
        }
 
        long long max_L = 0;
        for (int step = 1; step < n; step++) {
            int curr = (i - step + n) % n;
            max_L = max(max_L, h[curr]);
            L[curr] = max_L;
        }
 
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                sum += min(R[j], L[j]);
            }
        }
        cout << sum << (i == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}