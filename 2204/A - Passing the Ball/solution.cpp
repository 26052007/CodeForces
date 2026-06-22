#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
            
            for (int i = 0; i < n; ++i) {
                if (s[i] == 'L') {
                    cout << i + 1 << "
";
                    break;
                }
            }
        }
    }
    
    return 0;
}