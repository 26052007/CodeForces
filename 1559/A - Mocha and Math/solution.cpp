#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int ans;
    // Read the first element to initialize our answer
    cin >> ans; 
    
    // Read the rest of the array and bitwise AND each element with our answer
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        ans &= x; 
    }
    
    // The result is the minimal possible maximum value
    cout << ans << "
";
}
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}