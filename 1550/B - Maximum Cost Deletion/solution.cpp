#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
 
    if (b >= 0) {
        cout << n * a + n * b << "
";
    } else {
        int blocks = 1;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                blocks++;
            }
        }
        int min_ops = (blocks / 2) + 1;
        cout << n * a + min_ops * b << "
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