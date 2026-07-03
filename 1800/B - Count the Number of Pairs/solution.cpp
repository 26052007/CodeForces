#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    vector<int> lower(26, 0), upper(26, 0);
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            lower[c - 'a']++;
        } else {
            upper[c - 'A']++;
        }
    }
 
    int ans = 0;
    int extra = 0;
    for (int i = 0; i < 26; ++i) {
        int pairs = min(lower[i], upper[i]);
        ans += pairs;
        extra += abs(lower[i] - upper[i]) / 2;
    }
 
    ans += min(k, extra);
    cout << ans << "
";
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