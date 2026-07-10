#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int cost = 0;
    
    if (2 * x <= y) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '.') {
                    cost += x;
                }
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '.') {
                    if (j + 1 < m && grid[i][j + 1] == '.') {
                        cost += y;
                        ++j;
                    } else {
                        cost += x;
                    }
                }
            }
        }
    }
    
    cout << cost << "
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