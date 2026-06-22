#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int counts[10] = {0};
    for (char c : s) {
        counts[c - '0']++;
    }
    
    string result = "";
    for (int i = 0; i < 10; ++i) {
        int min_req = 9 - i;
        
        for (int d = min_req; d <= 9; ++d) {
            if (counts[d] > 0) {
                result += (char)(d + '0');
                counts[d]--;
                break; 
            }
        }
    }
    
    cout << result << endl;
}
 
int main() {
 
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}