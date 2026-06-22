#include <iostream>
 
using namespace std;
 
 
 
 
int get_odd_part(int num) {
    while (num > 0 && num % 2 == 0) {
        num /= 2;
    }
    return num;
}
 
void solve() {
    
}
 
int main() {
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin>>n;
        int a[n+5];
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
 
        for (int i = 1; i <= n; i++) {
 
            if (get_odd_part(i) != get_odd_part(a[i])) {
                possible = false;
                break; 
            }
        }
 
        if (possible) {
            cout << "YES" << "
";
        } else {
            cout << "NO" << "
";
        }
        }
}