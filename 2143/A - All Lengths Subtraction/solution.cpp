#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int p[105]; 
            for (int i = 0; i < n; ++i) {
                cin >> p[i];
            }
            
            bool is_decreasing = false;
            bool possible = true;
 
            for (int i = 0; i < n - 1; ++i) {
                if (p[i] > p[i+1]) {
                    
                    is_decreasing = true;
                } else if (p[i] < p[i+1]) {
                   
                    if (is_decreasing) {
                        possible = false;
                        break;
                    }
                }
            }
            
            if (possible) {
                cout << "YES
";
            } else {
                cout << "NO
";
            }
        }
        }
    
    return 0;
}