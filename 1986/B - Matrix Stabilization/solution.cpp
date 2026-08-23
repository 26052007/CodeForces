#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int max_neighbor = 0;
            if (i > 0) max_neighbor = max(max_neighbor, a[i - 1][j]);
            if (i < n - 1) max_neighbor = max(max_neighbor, a[i + 1][j]);
            if (j > 0) max_neighbor = max(max_neighbor, a[i][j - 1]);
            if (j < m - 1) max_neighbor = max(max_neighbor, a[i][j + 1]);
            
            if (a[i][j] > max_neighbor) {
                a[i][j] = max_neighbor;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << (j == m - 1 ? "" : " ");
        }
        cout << "
";
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