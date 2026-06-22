#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long total_dist = 0;
    for (int i = 0; i < n - 1; i++) {
        total_dist += abs(a[i] - a[i + 1]);
    }
 
 
    long long max_reduction = 0;
    
 
    max_reduction = max(max_reduction, (long long)abs(a[0] - a[1]));
 
    max_reduction = max(max_reduction, (long long)abs(a[n - 2] - a[n - 1]));
    
 
    for (int i = 1; i < n - 1; i++) {
        long long reduction = abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]) - abs(a[i - 1] - a[i + 1]);
        max_reduction = max(max_reduction, reduction);
    }
 
 
    cout << total_dist - max_reduction << "
";
}
 
int main() {
  
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}