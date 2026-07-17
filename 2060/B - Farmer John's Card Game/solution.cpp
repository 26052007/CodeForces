#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> p(n);
    bool possible = true;
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());
        for (int j = 1; j < m; ++j) {
            if (a[i][j] - a[i][j - 1] != n) {
                possible = false;
            }
        }
        if (a[i][0] >= n) {
            possible = false;
        } else {
            p[a[i][0]] = i + 1;
        }
    }
 
    if (!possible) {
        cout << -1 << "
";
    } else {
        for (int i = 0; i < n; ++i) {
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << "
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