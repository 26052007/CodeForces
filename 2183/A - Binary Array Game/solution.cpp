#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int first = 0, last = 0, x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (i == 0) first = x;
        if (i == n - 1) last = x;
    }
    
    if (first == 1 || last == 1) {
        cout << "Alice
";
    } else {
        cout << "Bob
";
    }
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