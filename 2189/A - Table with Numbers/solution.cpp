#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    
    int versatile = 0;
    int row_only = 0;  
    int col_only = 0;  
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        
 
        if (a <= h && a <= l) {
            versatile++;
        } else if (a <= h && a > l) {
            row_only++;
        } else if (a > h && a <= l) {
            col_only++;
        }
 
    }
    
    int max_sum = min({versatile + row_only, versatile + col_only, (versatile + row_only + col_only) / 2});
    
    cout << max_sum << "
";
}
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}