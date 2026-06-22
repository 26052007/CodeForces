#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int countA = 0;
        int countB = 0;
        
        // Loop through the string and count characters
        for (char c : s) {
            if (c == 'A') {
                countA++;
            } else if (c == 'B') {
                countB++;
            }
        }
        
        if (countA > countB) {
            cout << "A
";
        } else {
            cout << "B
";
        }
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}