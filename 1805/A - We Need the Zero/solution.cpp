#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int xor_sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        xor_sum ^= a;
    }
    
    if (n % 2 != 0) {
        cout << xor_sum << "
";
    } else {
        if (xor_sum == 0) {
            cout << 0 << "
";
        } else {
            cout << -1 << "
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}