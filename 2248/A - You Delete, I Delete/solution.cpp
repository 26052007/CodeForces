#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int idx0 = -1, idx1 = -1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0' && idx0 == -1) idx0 = i;
        if (s[i] == '1' && idx1 == -1) idx1 = i;
    }
    string result = "";
    for (int i = 0; i < s.length(); ++i) {
        if (i != idx0 && i != idx1) {
            result += s[i];
        }
    }
    cout << result << "
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