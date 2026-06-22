#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            string b;
            cin >> b;
            cout << b[0];
            for (size_t i = 1; i < b.length(); i += 2) {
                cout << b[i];
            }
            cout << "
";
        }
    }
    
    return 0;
}