#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> x(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> x[i];
    }
    
    int current_a = 1000;
    cout << current_a << " ";
    
    for (int i = 0; i < n - 1; ++i) {
        current_a += x[i];
        cout << current_a << " ";
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}