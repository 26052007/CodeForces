#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> m(n);
    int current_max = 0;
    for (int i = n - 1; i >= 0; i--) {
        current_max = max({current_max, a[i], b[i]});
        m[i] = current_max;
    }
    
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + m[i];
    }
    
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << " ";
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