#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    int max_cashes = 1;
    int current_cashes = 1;
    
    int prev_h, prev_m;
    cin >> prev_h >> prev_m;
    
    for (int i = 1; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        if (h == prev_h && m == prev_m) {
            current_cashes++;
        } else {
            max_cashes = max(max_cashes, current_cashes);
            current_cashes = 1;
            prev_h = h;
            prev_m = m;
        }
    }
    max_cashes = max(max_cashes, current_cashes);
    
    cout << max_cashes << "
";
    
    return 0;
}