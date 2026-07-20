#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    for (int mask = 0; mask < (1 << n); ++mask) {
        string p = "";
        string x = "";
        vector<int> indices;
 
        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1) {
                p += s[i];
                indices.push_back(i + 1);
            } else {
                x += s[i];
            }
        }
 
        bool is_p_valid = true;
        for (size_t i = 1; i < p.length(); ++i) {
            if (p[i] < p[i - 1]) {
                is_p_valid = false;
                break;
            }
        }
 
        if (!is_p_valid) continue;
 
        bool is_x_pal = true;
        int x_len = x.length();
        for (int i = 0; i < x_len / 2; ++i) {
            if (x[i] != x[x_len - 1 - i]) {
                is_x_pal = false;
                break;
            }
        }
 
        if (is_x_pal) {
            cout << indices.size() << "
";
            for (size_t i = 0; i < indices.size(); ++i) {
                cout << indices[i] << (i + 1 == indices.size() ? "" : " ");
            }
            cout << "
";
            return;
        }
    }
    cout << -1 << "
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