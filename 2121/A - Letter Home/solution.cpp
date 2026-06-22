#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        int mn = s;
        int mx = s;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        
        cout << (mx - mn) + min(s - mn, mx - s) << "
";
    }
    
    return 0;
}